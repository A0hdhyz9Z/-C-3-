#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int CountDigit( int number, int digit ){

    int count = 0;
    int var = 0;
    if(number == 0)
        count = 1;
    if(number < 0)
        number *= (-1);
    while(number != 0){
        var = number%10;
        if(var == digit)
            count++;
        number /= 10;
    }

    return count;
}
