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

    printf("���ڸ� �Է��ϼ��� : ");
    scanf_s("%c", &string);

    printf("�ٲ� ���� %c�Դϴ�.", to_upper_lower(string));

    return 0; //return �Լ��� ���� �� ��
}*/
/*
#include <stdio.h>
int main(void)
{
    int arr[5]; //5���� ����� ����!
    int max, min, i;
    int sum = 0;

    for (i = 0; i < 5; i++) //index �� �ϳ��� ++
    {
        printf("5���� ������ �Է��ϼ��� : ");
        scanf_s("%d", &arr[i]);
    }

    max = arr[0]; //�ּڰ�, �ִ�, �� ���� �������� ������ ���������� 0������ �ʱ�ȭ!
    min = arr[0];
    sum = arr[0];

    for (i = 1; i < 5; i++)
    {
        sum += arr[i];
        //�����ָ鼭 �ٲ��ֱ�
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    printf("�ּڰ� : %d\n", min);
    printf("�ִ� : %d\n", max);
    printf("�� �� : %d", sum);

    return 0;
}*/

/*#include <stdio.h>

int sum(int n)

{
    if (n != 1)
        return n + sum(n - 1); //���� ��� 5������ ���� 5 + (1, 2, 3, 4)������ ��
    else if (n == 1)
        return n;
}

int main(void)
{
    int n;
    
    printf("n�� �Է��ϼ��� : ");
    scanf_s("%d", &n);
    printf("%d������ �� : %d", n, sum(n));

    return 0;

}*/
/*
#include <stdio.h>
void print_num(int n)
{
    if (n > 0)
    {
        print_num(n - 1);//return ���Ŀ� 
        printf("%d\n", n);
    }
}

int main(void)
{
    int n;
    printf("n�� �Է��ϼ��� : ");
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
    printf("���ܾ �Է��ϼ��� : ");
    scanf_s("%d", &voca);
}