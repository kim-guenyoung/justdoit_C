/*#include <stdio.h>

void Max(int num2)
{
    static int num1 = 0; //최댓값을 기억하도록 해야하므로 static함수 선언
    int max;
    max = num1 > num2 ? num1 : num2;
    num1 = max; //입력된 수가 더 클 때마다 갱신
    printf("최댓값 : %d\n", max);
}

int main(void)
{
    int num;
    int max = 0;
    printf("1부터 100 사이의 정수 중 최댓값을 반환합니다. (음수 나오면 종료)\n정수를 입력하세요 : ");

    while (1)
    {
        scanf_s("%d", &num);
        if (num >= 0)
        {
            Max(num); //return을 써버리면 아래 있는 break 혹은 함수를 종료해버리기 때문에 무한루프가 안됨!!
        }
        else
            break;
    }
}*/

/*#include <stdio.h>

void binary(int num) //2진수 변환 함수
{
    if (num > 0) //입력한 수가 양수일 때만
        binary(num / 2); //계속 2로 나누어서 떨어질 때까지
    printf("%d", num % 2); //그 값을 순서대로 출력시킴(2진수(0 혹은 1)로 출력되어야 해서 % 사용함!)
}

int main(void)
{
    int num;
    printf("10진수를 2진수로 변환하겠습니다.\n변환할 정수를 입력하세요 : ");
    scanf_s("%d", &num);

    if (num > 0)
    {
        binary(num);
    }
    else //음수나 0은 그냥 0으로 출력
        printf("0");

    return 0;
}*/
/*
#include <stdio.h>

double CelToFah(double Cel)
{
    double Fah;
    Fah = 1.8 * Cel + 32;
    printf("섭씨 온도 %lf도는 화씨 온도로 %lf도입니다.", Cel, Fah);
    return Fah;
}

double FahToCel(double Fah)
{
    double Cel;
    Cel = (Fah - 32) / 1.8;
    printf("화씨 온도 %lf도는 섭씨 온도로 %lf도입니다.", Fah, Cel);
    return Cel;
}
int main(void)
{
    double Fah, Cel;
    int temperature;
    printf("1 : 섭씨 온도 → 화씨온도, 2 : 화씨 온도 → 섭씨 온도 (1 혹은 2 입력))\n");
    scanf_s("%d", &temperature);
    if (temperature == 1)
    {
        printf("섭씨 온도 입력 : ");
        scanf_s("%lf", &Cel);
        return CelToFah(Cel);
    }

    if (temperature == 2)
    {
        printf("화씨 온도 입력 : ");
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
    printf("몇 개의 피보나치 수열을 출력하시겠습니까? : ");
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

    printf("x1, y1의 좌표 : ");
    scanf_s("%d %d", &x1, &y1);

    printf("x2, y2의 좌표 : ");
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

    printf("a, b 값 입력 : ");
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

    printf("문자를 입력하세요 : ");
    scanf_s("%c", &string);
    printf("바꾼 것은 %c입니다.", to_upper_lower(string));

    return to_upper_lower;
}