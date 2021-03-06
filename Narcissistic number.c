/**
水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。
本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数。
*/
#include <stdio.h>

int narcissistic(int number);

void PrintN(int m, int n);

int main() {
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n)) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int narcissistic(int number) {
    int Num = number;
    int var_1 = 0;
    int var_2 = 1;
    int sum = 0;
    int count = 0;

    while (number != 0) {
        number /= 10;
        count++;
    }
    number = Num;

    while (number != 0) {
        var_1 = number % 10;
        var_2 = 1;
        int i = 0;
        for (; i < count; i++) {
            var_2 *= var_1;
        }
        sum += var_2;
        number /= 10;
    }
    if (Num == sum) {
        return 1;
    }
    if (Num != sum)
        return 0;
}

void PrintN(int m, int n) {
    int i = m + 1;
    for (; i < n; i++) {
        narcissistic(i);
        if(narcissistic(i))
            printf("%d\n", i);

    }
}
