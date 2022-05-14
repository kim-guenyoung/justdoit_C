#include<stdio.h>

int main(void)
{
    int num, sum = 0;

    for (num = 1; num <= 100; num++)
    {
        if (num % 10 == 6)
            continue;
        sum += num;

        if (num % 5 == 0)
            sum = 2 * num + sum;

        if (sum > 2000)
            break;

        
       

    }
    printf("계산한 값: %d", sum);

    return 0;
}