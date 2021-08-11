/*
 * ����Ҫ��ʵ��һ�������������й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e��
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

/* ��Ĵ��뽫��Ƕ������ */

double funcos(double e, double x) {
    double var_1 = 1;
    double var_2 = 1;
    double var_3 = 1;
    double sum = 1;
    int i = 0;
    int k = -1;

    for (i = 2; var_1 > e; i += 2) {
        var_2 = var_2 * x * x;        // ����
        var_3 = var_3 * i * (i - 1);    // ��ĸ
        sum = sum + k * var_2 / var_3; // ��
        var_1 = var_2 / var_3;        // �������
        k = -k;                    // �ı����
    }
    return sum;

}
