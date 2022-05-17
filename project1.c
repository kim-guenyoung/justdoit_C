/*#include <stdio.h>

char to_upper_lower(char ch)

{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        return ch;

    }

    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        return ch;
    }
    return ch;
}

int main(void)

{
    char string;

    printf("문자를 입력하세요 : ");
    scanf_s("%c", &string);

    printf("바꾼 것은 %c입니다.", to_upper_lower(string));

    return 0; //return 함수로 가면 안 됨
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5]; //5개를 사용할 것임!
    int max, min, i;
    int sum = 0;

    for (i = 0; i < 5; i++) //index 값 하나씩 ++
    {
        printf("5개의 정수를 입력하세요 : ");
        scanf_s("%d", &arr[i]);
    }

    max = arr[0]; //최솟값, 최댓값, 총 합을 목적으로 변수를 선언했으니 0값으로 초기화!
    min = arr[0];
    sum = arr[0];

    for (i = 1; i < 5; i++)
    {
        sum += arr[i];
        //비교해주면서 바꿔주기
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    printf("최솟값 : %d\n", min);
    printf("최댓값 : %d\n", max);
    printf("총 합 : %d", sum);

    return 0;
}*/

/*#include <stdio.h>

int sum(int n)

{
    if (n != 1)
        return n + sum(n - 1); //예를 들어 5까지의 합은 5 + (1, 2, 3, 4)까지의 합
    else if (n == 1)
        return n;
}

int main(void)
{
    int n;
    
    printf("n을 입력하세요 : ");
    scanf_s("%d", &n);
    printf("%d까지의 합 : %d", n, sum(n));

    return 0;

}*/
/*
#include <stdio.h>
void print_num(int n)
{
    if (n > 0)
    {
        print_num(n - 1);//return 이후에 
        printf("%d\n", n);
    }
}

int main(void)
{
    int n;
    printf("n을 입력하세요 : ");
    scanf_s("%d", &n);
    print_num(n);

    return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
    char str[9];
    str[0] = 'G', str[1] = 'o', str[2] = 'o', str[3] = 'd', str[4] = ' ';
    str[5] = 't', str[6] = 'i', str[7] = 'm', str[8] = 'e';
    int i;

    for (i = 0; i < 9; i++)
        printf("%c", str[i]);

    return 0;
}*/

#include <stdio.h>
int main(void)
{
    int voca;
    printf("영단어를 입력하세요 : ");
    scanf_s("%d", &voca);
}