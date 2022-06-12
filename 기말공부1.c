/*#include <stdio.h>
int main(void)
{
    int max = 0;
    int min = 0;
    double sum = 0;
    int score[20];
    int i;
    printf("국어 점수부터 입력받겠습니다.\n\n");
    for (i = 1; i <= 20; i++)
    {
        printf("학생 %d의 국어 점수를 입력하세요 : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("국어 점수의 평균 : %lf\n", sum / 20);
            printf("국어 점수의 최댓값 : %d\n", max);
            printf("국어 점수의 최솟값 : %d\n", min);
        }
    }
    printf("\n수학 점수를 입력받겠습니다.\n");
    max = 0, min = 0, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("학생 %d의 수학 점수를 입력하세요 : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("수학 점수의 평균 : %lf\n", sum / 20);
            printf("수학 점수의 최댓값 : %d\n", max);
            printf("수학 점수의 최솟값 : %d\n", min);
        }
    }
    printf("\n영어 점수를 입력받겠습니다.\n");
    max = 0, min = 0, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("학생 %d의 영어 점수를 입력하세요 : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("영어 점수의 평균 : %lf\n", sum / 20);
            printf("영어 점수의 최댓값 : %d\n", max);
            printf("영어 점수의 최솟값 : %d\n", min);
        }
    }
    return 0;
}*/
/*

#include<stdio.h>
int main(void)
{
    int score[20][3];
    int i, j, temp;
    int ksum = 0, esum = 0, msum = 0;

    for (i = 1; i <= 20; i++)
    {
        printf("학생 %d의 국어, 영어, 수학 점수를 입력하세요>> ", i);  //20명의 각 과목 점수 입력받기
        scanf_s("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        ksum += score[i][0];  //국어 점수 합계
        esum += score[i][1];  //영어 점수 합계
        msum += score[i][2];  //수학 점수 합계

        if (i == 20)
            printf("\n국어 평균: %d\n", ksum / 20);  //국어 평균
        if (i == 20)
            printf("영어 평균: %d\n", esum / 20);  //영어 평균
        if (i == 20)
            printf("수학 평균: %d\n\n", msum / 20);  //수학 평균
    }


    for (i = 0; i < 20; i++)  //국어, 영어, 수학 선택정렬(내림차순)
    {
        for (j = 0; j < 20 - i - 1; j++)
        {
            if (score[j][0] < score[j + 1][0])
            {
                temp = score[j][0];
                score[j][0] = score[j + 1][0];
                score[j + 1][0] = temp;
            }

            if (score[j][1] < score[j + 1][1])
            {
                temp = score[j][1];
                score[j][1] = score[j + 1][1];
                score[j + 1][1] = temp;
            }

            if (score[j][2] < score[j + 1][2])
            {
                temp = score[j][2];
                score[j][2] = score[j + 1][2];
                score[j + 1][2] = temp;
            }
        }
    }

    for (i = 0; i < 20; i++)
    {
        score[i][0];
    }
    printf("\n");


    for (i = 0; i < 20; i++)
    {
        score[i][1];
    }
    printf("\n");

    for (i = 0; i < 20; i++)
    {
        score[i][2];
    }
    printf("\n\n");

    printf("국어 최댓값 :  %d\n", score[0][0]);  //내림차순 정렬 후 첫번째 인덱스가 최댓값
    printf("국어 최솟값 : %d\n", score[19][0]);  //내림차순 정렬 후 마지막 인덱스가 최솟값
    printf("영어 최댓값 : %d\n", score[0][1]);
    printf("영어 최솟값 : %d\n", score[19][1]);
    printf("수학 최댓값 : %d\n", score[0][2]);
    printf("수학 최솟값 : %d\n", score[19][2]);

    return 0;
}*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[100] = { 0, };
    int strLen = sizeof(str) / sizeof(char);
    int i;
    printf("문자열을 입력하세요 : ");
    scanf("%[^\n]", str, 100); // %[^\n] : 개행문자를 제외한 모든 문자를 읽게 함
    for (i = 0; i < strLen; i++)
    {
        if (str[i] == ' ')
            str[i + 1] -= 32;
    }
    if ('a' <= str[0] <= 'z')
        str[0] -= 32;
    
    printf("문자열 : %s", str);
}
*/
/*
#include <stdio.h>
int main(void)
{
    char sel;
    printf("M 오전, A 오후, E 저녁\n");
    printf("입력 : ");
    scanf_s("%c", &sel);

    switch (sel)
    {
    case 'M':
    case 'm': //case 'M': case 'm': 이렇게 한줄에 써도 무관
        printf("Morning\n");
        break;
    case 'A':
    case 'a':
        printf("Afternoon\n");
        break;
    case 'E':
    case 'e':
        printf("Evening\n");
        break;
    }
    return 0;
}*/
/*
#include <stdio.h>
void Recursive(int num)
{
    if (num <= 0)
        return;
    printf("Recursive call! %d\n", num);
    Recursive(num - 1);
}

int main(void)
{
    Recursive(3);
    return 0;
}
/*
#include <stdio.h>
int main(void)
{
    int num = 2;
    int cnt = 1;
    int i;

    while (cnt <= 10) //10번 다 셀 때까지 반복
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0) //i가 증가하면서 num이 될 때까지 나눠지면 탈출
                break;
        }
        if (i == num)
        {
            cnt++; //num과 같으면 cnt 증가시켜서 10이 될 때까지 반복
            printf("%d ", num);
        }
        num++;
    }
}*/
/*
#include <stdio.h>

int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력 : ");
    scanf_s("%d %d", &num1, &num2);
    printf("%d와 %d 중 절댓값이 큰 정수 : %d\n",
        num1, num2, AbsoCompare(num1, num2));
    return 0;
}

int AbsoCompare(int num1, int num2)
{
    if (GetAbsoValue(num1) > GetAbsoValue(num2))
        return num1;
    else
        return num2;
}

int GetAbsoValue(int num)
{
    if (num >= 0)
        return num;
    else
        return num * (-1);
}*/