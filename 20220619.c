/*#include <stdio.h>

int find(int arr[], int n)
{
	int i;
	for (i = 0; i < 8; i++)
	{
		if (n == arr[i])
			return i + 1;
	}
}
int main(void)
{
	int num;
	int arr[8] = { 4, 1, 2, 5, 7, 3, 6, 8 };
	printf("숫자 입력(0 누르면 종료) : ");
	while (1)
	{
		scanf_s("%d", &num);
		if (num == 0)
			break;
		if (num > 8)
		{
			printf("1부터 8까지만 입력할 수 있습니다.");
			break;
		}
		printf("%d은(는) %d번째 위치에 있습니다.", num, find(arr, num));
	}
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	printf("영단어 입력 : ");
	scanf("%s", voca);
	int i;
	char max = 0;
	int len = 0;
	while (voca[len] != 0)
		len++;
	for (i = 0; i < len; i++)
	{
		if (voca[i] > voca[i + 1])
			max = voca[i];
	}
	printf("%c ", max);
}*/
/*
#include <stdio.h>

void binary(int num) //2진수 변환 함수
{
	if (num > 1) //입력한 수 0보다 크다고 하면, 맨 앞자리 수에 0이 출력되니까
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
print_num(int n)
{
	int i;
	for (i = 1; i < n; i++)
	{
		printf("%d\n", i);
	}
}
int main(void)
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);
	printf("%d\n", print_num(num));
	return 0;
}*/
/*
#include <stdio.h>
int sum(int n)
{
	if (n != 1)
		return n + sum(n - 1);
	else
		return n;
}
int main(void)
{
	int n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	printf("%d ", sum(n));
}*/
/*
#include <stdio.h>
int max(int n)
{

}
int main(void)
{
	static int num;
	printf("1~100 사이의 정수 입력 : ");
	while(1)
		scanf_s("%d ", &num);
}*/
/*
#include <stdio.h>
int main(void)
{
	int cnt = 1, num = 2, i;
	for (num = 2; cnt <= 10; num++) //10개 출력이니까 10까지 하고, num은 1을 처리해주지 못하기 때문에 2부터 시작
	{
		for (i = 2; i <= num; i++)
		{
			
			if (num == i) //i가 소순데, 반복문 되면서 i++가 소수인지 확인 
				//애초에 i는 나누어지는 수가 있는지 확인하기 위한 목적
			{
				printf("%d ", num);
				cnt++;
			}
			if (num % i == 0) //같이 커지는데 만약에 여기서 나누어떨어지면 출력X
				break;

		}
	}
	return 0;
}*/
/*
#include <stdio.h>
double FahToCel(Fah)
{
	return (Fah - 32) / 1.8;
}
double CelToFah(Cel)
{
	return 1.8 * Cel + 32;
}
int main(void)
{
	int sel;
	int temperature;
	printf("섭씨 → 화씨 : 1\n화씨 → 섭씨 : 2\n");
	scanf_s("%d", &sel);


	if (sel == 1)
	{
		printf("섭씨 입력 : ");
		scanf_s("%d", &temperature);
		printf("섭씨 → 화씨 : %f", CelToFah(temperature));
	}
	if (sel == 2)
	{
		printf("화씨 입력 : ");
		scanf_s("%d", &temperature);
		printf_s("화씨 → 섭씨 : %f", FahToCel(temperature));
	}
	return 0;
}*/
/*
#include <stdio.h>
int fibonacci(num)
{
	int f1 = 0, f2 = 1;
	int f3, i;
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

/*
#include <stdio.h>
char to_upper_lower(char ch)
{
	if ('A' <= ch <= 'Z')
	{
		ch += 32;
		return ch;
	}
	if ('a' <= ch <= 'z')
	{
		ch -= 32;
		return ch;
	}
	else
		printf("알파벳만 입력할 수 있습니다.");
}
int main(void)
{
	char alphabet;
	printf("알파벳 입력 : ");
	scanf_s("%c", &alphabet);

	printf("%c", to_upper_lower(alphabet));
	return 0;
}*/
/*
#include <stdio.h>
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

/*#include <stdio.h>
int main(void)
{
	// 4. 포인터의 연산
	int a[4] = { 100, 200, 300, 400 };
	int* p = a;
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3); //주소값 받음
	p++;
	printf("%p\n", p); //p++에 의해 인덱스 1번쨰 값

	*(a + 1) += 100; //여기도 첫번째 값에 +100인데 아까 마지막이 300이어서 400출력
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);
	p--;
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3)); //p++한 뒤에 p--니까 다시 원위치로 돌아와
	//100 400 300 400이 출력되는 것임
}*/

#include <stdio.h>

int main(void)
{
	int arr[10] = { 10, 14, 3, 1, 9, 2, 6, 13, 7, 11 };
	int i, j, num, temp;

	int* ptr;
	printf("정렬 전 : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n정렬 후 : ");
	//버블정렬과 포인터 이용
	ptr = &arr;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)//예를 들어 3개의 수가 있다하자 비교 총 2번 해주는 것처럼 얘도 9번
		{
			if (*(ptr + i) < *(ptr + j)) //다음 리스트 값이랑 계속 비교해주면서 큰 값을 다음으로 넘김
				//for문 써서 뒤로 계속 밀려나게
			{
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}