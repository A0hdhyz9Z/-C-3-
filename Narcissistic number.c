/**
ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
����Ҫ���д����������һ���жϸ��������Ƿ�ˮ�ɻ�������һ������С�����˳���ӡ����������(m,n)�����е�ˮ�ɻ�����
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

/* ��Ĵ��뽫��Ƕ������ */

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
