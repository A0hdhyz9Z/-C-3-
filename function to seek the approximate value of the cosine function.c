/*
 * 本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
 */

#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main() {
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

/* 你的代码将被嵌在这里 */

double funcos(double e, double x) {
    double var_1 = 1;
    double var_2 = 1;
    double var_3 = 1;
    double sum = 1;
    int i = 0;
    int k = -1;

    for (i = 2; var_1 > e; i += 2) {
        var_2 = var_2 * x * x;        // 分子
        var_3 = var_3 * i * (i - 1);    // 分母
        sum = sum + k * var_2 / var_3; // 和
        var_1 = var_2 / var_3;        // 误差上限
        k = -k;                    // 改变符号
    }
    return sum;

}
