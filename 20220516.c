/*#include <stdio.h>

void Max(int num2)
{
    static int num1 = 0; //�ִ��� ����ϵ��� �ؾ��ϹǷ� static�Լ� ����
    int max;
    max = num1 > num2 ? num1 : num2;
    num1 = max; //�Էµ� ���� �� Ŭ ������ ����
    printf("�ִ� : %d\n", max);
}

int main(void)
{
    int num;
    int max = 0;
    printf("1���� 100 ������ ���� �� �ִ��� ��ȯ�մϴ�. (���� ������ ����)\n������ �Է��ϼ��� : ");

    while (1)
    {
        scanf_s("%d", &num);
        if (num >= 0)
        {
            Max(num); //return�� ������� �Ʒ� �ִ� break Ȥ�� �Լ��� �����ع����� ������ ���ѷ����� �ȵ�!!
        }
        else
            break;
    }
}*/

/*#include <stdio.h>

void binary(int num) //2���� ��ȯ �Լ�
{
    if (num > 0) //�Է��� ���� ����� ����
        binary(num / 2); //��� 2�� ����� ������ ������
    printf("%d", num % 2); //�� ���� ������� ��½�Ŵ(2����(0 Ȥ�� 1)�� ��µǾ�� �ؼ� % �����!)
}

int main(void)
{
    int num;
    printf("10������ 2������ ��ȯ�ϰڽ��ϴ�.\n��ȯ�� ������ �Է��ϼ��� : ");
    scanf_s("%d", &num);

    if (num > 0)
    {
        binary(num);
    }
    else //������ 0�� �׳� 0���� ���
        printf("0");

    return 0;
}*/
/*
#include <stdio.h>

double CelToFah(double Cel)
{
    double Fah;
    Fah = 1.8 * Cel + 32;
    printf("���� �µ� %lf���� ȭ�� �µ��� %lf���Դϴ�.", Cel, Fah);
    return Fah;
}

double FahToCel(double Fah)
{
    double Cel;
    Cel = (Fah - 32) / 1.8;
    printf("ȭ�� �µ� %lf���� ���� �µ��� %lf���Դϴ�.", Fah, Cel);
    return Cel;
}
int main(void)
{
    double Fah, Cel;
    int temperature;
    printf("1 : ���� �µ� �� ȭ���µ�, 2 : ȭ�� �µ� �� ���� �µ� (1 Ȥ�� 2 �Է�))\n");
    scanf_s("%d", &temperature);
    if (temperature == 1)
    {
        printf("���� �µ� �Է� : ");
        scanf_s("%lf", &Cel);
        return CelToFah(Cel);
    }

    if (temperature == 2)
    {
        printf("ȭ�� �µ� �Է� : ");
        scanf_s("%lf", &Fah);
        return FahToCel(Fah);
    }
    return 0;
}*/

/*#include <stdio.h>
int fibonacci(num)
{
    int f1 = 0, f2 = 1, f3, i;
    if (num == 1)
        printf("%d", f1);
    else
        printf("%d, %d, ", f1, f2);
    for (i = 0; i < num - 2; i++)
    {
        f3 = f1 + f2;
        printf("%d, ", f3);
        f1 = f2;
        f2 = f3;
    }
}

int main(void)
{
    int num;
    printf("�� ���� �Ǻ���ġ ������ ����Ͻðڽ��ϱ�? : ");
    scanf_s("%d", &num);

    if (num == 1)
        printf(1);

    if (num < 1)
        return -1;
    
    if (num > 1)
        return fibonacci(num);
    return 0;
}*/
/*
#include <stdio.h>
double sqrt(Distance)
{
    
}

double distance(void)
{
    int x, y;
    int x1, y1, x2, y2;
    double distance;
    
    scanf_s("%d %d", &x1, &y1);
    scanf_s("%d %d", &x2, &y2);

    distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    return sqrt(distance);
}

int main(void)
{
    int x1, y1, x2, y2;

    printf("x1, y1�� ��ǥ : ");
    scanf_s("%d %d", &x1, &y1);

    printf("x2, y2�� ��ǥ : ");
    scanf_s("%d %d", &x2, &y2);

    return distance;
}*/
/*
#include <stdio.h>

int square(int c)
{
    return c * c;
}

int main(void)
{
    int a, b;
    int result1, result2;
    int result;

    printf("a, b �� �Է� : ");
    scanf_s("%d %d", &a, &b);
    result1 = square(a);
    result2 = square(b);
    
    result = result1 * result2;
    printf("a * a * b * b = %d", square(a) * square(b));
    return square;
}*/

#include <stdio.h>

char to_upper_lower(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        ch += 32;
        return ch;
    }
    if (ch >= 97 && ch <= 122)
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

    return to_upper_lower;
}