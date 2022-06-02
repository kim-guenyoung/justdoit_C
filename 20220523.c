/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[50];
	int i;
	int len = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca); //단어를 입력 받아 배열 voca속에 저장


	for (i = 0; voca[i] != 0; i++) //배열 voca 속에 아스키 코드에서 0을 가리키는 NULL문자가 나올 때까지는 계속 증가
		//문자열 출력 시 NULL문자는 끝에 투명 문자처럼 자동으로 생성된다.
		len = i + 1;

	printf("%d", len);

	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* temp;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10; //20
	*ptr2 -= 10; //10

	temp = ptr1; //ptr1값을 temp에 넣어주고
	ptr1 = ptr2; //ptr1값을 ptr2라 하자.
	ptr2 = temp; //그리고 ptr2의 값을 다시 temp 값이라 하면 ptr2 값은 temp값으로 ptr1값이 되고
	//ptr1 = ptr2에 의해 ptr1값은 ptr2값이 된다.

	printf("num1 : %d\nnum2 : %d", *ptr1, *ptr2); //주소 값 아니고 값이니까 * 사용
	// 위에서 num1은 10을 증가시켰으니 20
	//num2는 10을 감소시켰으니 10이 된다. 이 값을 서로 바꿔주니 10과 20이 나온다.
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int sec, hour, min;
	printf("초(second) 입력 : ");
	scanf_s("%d", &sec);

	hour = sec / 3600;
	min = sec % 60 / 60;
	sec = sec % 60;
	printf("h : %d, m : %d, s : %d", hour, min, sec);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{

	int num;
	int cnt = 0;
	int i = 1;
	printf("10개의 소수를 출력하겠습니다.\n");
	
	//그래 일단 소수 출력 플긂부터 짜자

	for (num = 2; cnt <= 10; num++) //num은 그냥 1부터 쭉
	{
		for (i = 2; cnt <= num; i++) //i = num이 소수인지 아닌지 판별해주기 위해 계속 나누는 수
		{
			if (i == num) 
			{
				printf("%d ", num); //이 루프 돌고 그 담에 나누어 떨어지는 if문 나가서 break
				cnt++;
			}
			if (num % i == 0) //만약에 계속 커지다가 나누어지면 소수가 아니니까.
				break;
		}
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int x, y;
	printf("구구단의 짝수단만 출력하겠습니다.\n");

	for (x = 2; x <= 9; x++)
	{
		if (x % 2 == 0)
			printf("%d단\n", x);
		for (y = 1; y <= 9; y++)
		{
			if (x % 2 == 0 && x >= y)
			{
				printf("%d x %d = %d\n", x, y, x * y);
			}
		}
		printf("\n");
	}
}*/
/*
//백준 11654
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str;
	scanf("%c", &str);

	printf("%d", str);
}*/
//백준 10872
/*
#include <stdio.h>
int factorial(n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int main(void)
{
	int num;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	printf("%d", factorial(num));
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num;
	scanf_s("%x", &num);
	printf("%d", num);
}*/
/*
#include <stdio.h>
int main(void)
{
	int test;
	int num1, num2;
	int i;
	scanf_s("%d", &test);
	for(i = 0; i < test; i++)
	{
		scanf_s("%d %d", &num1, &num2);
		printf("%d\n", num1 + num2);
	}
}*/
/*
#include <stdio.h>
int main(void)
{
	int i;
	int start, end, step;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("start = ");
	scanf_s("%d", &start);
	printf("end = ");
	scanf_s("%d", &end);
	printf("step = ");
	scanf_s("%d", &step);

	for (i = start - 1; i < end; i += step) //배열은 0부터 시작이니까 1을 빼줌. 간격으로 i값 증가시키고 i값 출력할 것임
	{
		if ((start < 1) || (end > 26))
		{
			printf("1부터 26까지의 정수만 입력할 수 있습니다.\n프로그램을 종료합니다.");
			break;
		}
		printf("%c", str[i]);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum; //pnum은 100을 가리킴
	pnum = &num1; //num1의 주소 값 받음
	(*pnum) += 30; //전체에 괄호니까 이 값에 30을 더해주는 건데

	pnum = &num2;
	(*pnum) -= 30; //이건 num2 100에서 30이란 값을 빼니까

	printf("num1 : %d, num2 : %d\n", num1, num2); //130 70
	return 0;
}*/

#include <stdio.h>
int main(void)
{

}