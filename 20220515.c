/*#include <stdio.h>
int main(void)
{
    int a, b, n;
    int i, j = 0;

    printf("a b n 입력 : ");
    scanf_s("%d %d %d", &a, &b, &n);

    printf("(소수)");
    
    for (i = a; i <= b; i++)
    {
       // for(j = a; j< i; j++)
            if (is_prime(i) == 1) //1이 반환되면 소수라는 건데
            {

                if (j % n == 0) //한 줄에 n개씩 출력
                    printf("\n");
                j++;
                printf("%3d", i);
                
            }
    }
    return 0;
}

int is_prime(int num)
{
    int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0; //입력한 숫자가 소수인지 확인하고 소수가 아니면 0
    }
    return 1; //소수면 1 반환
}*/

#include <stdio.h>
int main(void)
{
    int num, i = 0;
    int x, y;
    int n = 0;
    printf("한 줄에 몇 단씩 출력할까요? ");
    scanf_s("%d", &num);

    for (x = 2; x <= 9; x++)
    {
        printf("\n%d단\n", x);
        for (y = 1; y <= 9; y++) //단
            printf("%d x %d = %d\n", x, y, x * y);
    }

}