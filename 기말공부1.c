/*#include <stdio.h>
int main(void)
{
    int max = 0;
    int min = 0;
    double sum = 0;
    int score[20];
    int i;
    printf("���� �������� �Է¹ްڽ��ϴ�.\n\n");
    for (i = 1; i <= 20; i++)
    {
        printf("�л� %d�� ���� ������ �Է��ϼ��� : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("���� ������ ��� : %lf\n", sum / 20);
            printf("���� ������ �ִ� : %d\n", max);
            printf("���� ������ �ּڰ� : %d\n", min);
        }
    }
    printf("\n���� ������ �Է¹ްڽ��ϴ�.\n");
    max = 0, min = 0, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("�л� %d�� ���� ������ �Է��ϼ��� : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("���� ������ ��� : %lf\n", sum / 20);
            printf("���� ������ �ִ� : %d\n", max);
            printf("���� ������ �ּڰ� : %d\n", min);
        }
    }
    printf("\n���� ������ �Է¹ްڽ��ϴ�.\n");
    max = 0, min = 0, sum = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("�л� %d�� ���� ������ �Է��ϼ��� : ", i);
        scanf_s("%d", &score[i]);
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        sum += score[i];

        if (i == 20)
        {
            printf("���� ������ ��� : %lf\n", sum / 20);
            printf("���� ������ �ִ� : %d\n", max);
            printf("���� ������ �ּڰ� : %d\n", min);
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
        printf("�л� %d�� ����, ����, ���� ������ �Է��ϼ���>> ", i);  //20���� �� ���� ���� �Է¹ޱ�
        scanf_s("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
        ksum += score[i][0];  //���� ���� �հ�
        esum += score[i][1];  //���� ���� �հ�
        msum += score[i][2];  //���� ���� �հ�

        if (i == 20)
            printf("\n���� ���: %d\n", ksum / 20);  //���� ���
        if (i == 20)
            printf("���� ���: %d\n", esum / 20);  //���� ���
        if (i == 20)
            printf("���� ���: %d\n\n", msum / 20);  //���� ���
    }


    for (i = 0; i < 20; i++)  //����, ����, ���� ��������(��������)
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

    printf("���� �ִ� :  %d\n", score[0][0]);  //�������� ���� �� ù��° �ε����� �ִ�
    printf("���� �ּڰ� : %d\n", score[19][0]);  //�������� ���� �� ������ �ε����� �ּڰ�
    printf("���� �ִ� : %d\n", score[0][1]);
    printf("���� �ּڰ� : %d\n", score[19][1]);
    printf("���� �ִ� : %d\n", score[0][2]);
    printf("���� �ּڰ� : %d\n", score[19][2]);

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
    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%[^\n]", str, 100); // %[^\n] : ���๮�ڸ� ������ ��� ���ڸ� �а� ��
    for (i = 0; i < strLen; i++)
    {
        if (str[i] == ' ')
            str[i + 1] -= 32;
    }
    if ('a' <= str[0] <= 'z')
        str[0] -= 32;
    
    printf("���ڿ� : %s", str);
}
*/
/*
#include <stdio.h>
int main(void)
{
    char sel;
    printf("M ����, A ����, E ����\n");
    printf("�Է� : ");
    scanf_s("%c", &sel);

    switch (sel)
    {
    case 'M':
    case 'm': //case 'M': case 'm': �̷��� ���ٿ� �ᵵ ����
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

    while (cnt <= 10) //10�� �� �� ������ �ݺ�
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0) //i�� �����ϸ鼭 num�� �� ������ �������� Ż��
                break;
        }
        if (i == num)
        {
            cnt++; //num�� ������ cnt �������Ѽ� 10�� �� ������ �ݺ�
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
    printf("�� ���� ���� �Է� : ");
    scanf_s("%d %d", &num1, &num2);
    printf("%d�� %d �� ������ ū ���� : %d\n",
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