#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */

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
