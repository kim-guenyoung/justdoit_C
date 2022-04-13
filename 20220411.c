//자료형마다 표현할 수 있는게 다르다 그 자료형을 저장할 수 있는 메모리공간의 크기에 따라서 저장 값이 달라짐을 기억하자. char int double
//signed unsigned 정의 확립시키기/ 저장 값의 범위절댓값 관계 이해 (절반값이 되는 그러한 원리) 1111 : -1 //overflow 개념ㅑ
/*#include <stdio.h>
int main(void)
{
	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%X %#X \n", num2, num2);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	printf("%f \n", 100.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 100.1234);
	printf("%e \n", 0.12345678);
	printf("%g \n", 0.1234);
	printf("%f \n", 0.12345678);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	printf("%-8s %14s %5s \n", "이름", "전자공학", "학년");
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("입력된 정수 10진수 출력 : ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num = 0;

	while (num < 5)
	{
		printf("Hello World\n", num);
		num++;
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 0;

	while (num < 3)
	{
		printf("Hello World! %d\n", num);
		num++;
	}//여기서 3번
	while (num < 5)
		printf("Hello world! %d\n", num++);
}//여기서 2번*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0, cnt = 1;

	scanf("숫자 입력 : %d", &num);
	
	while (cnt <= num)
	{
		printf("%d\n", cnt);
		cnt++;
	}
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0;
	int cnt = 1;
	scanf("숫자 입력 : %d", &num);
	while (cnt <= num)
	{

		printf("%d\n", cnt);
		cnt++;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num=0;
	int cnt=1;

	scanf("%d", &num);

	while (cnt <= num) { //입력한 값보다 작거나 같을 때까지만 출력
		printf("%d\n", cnt);
		cnt++;
	}

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num= 1, cnt = 1, sum = 0;
	scanf("%d", &num);


	while (cnt <= num)
	{
		printf("%d\n", cnt);
		sum += cnt;//입력된 숫자까지만 추가로 더하기
		cnt++;

	}

	printf("sum = %d", sum);
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0, cnt = 0;

	printf("정수 입력 : ");
	scanf("%d", &num);

	while (cnt < num) //출력한 정수개수 만큼 출력 
	{
		printf("Hello world \n", num);
		cnt++;
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0, cnt = 1; //1 이상의 수부터 나오니 cnt = 1

	printf("정수 입력 : ");
	scanf("%d", &num);

	while (cnt <= num) //입력받은 수가 크거나 같아질 때까지
	{
		printf("%d\n", cnt * 3); //3의 배수이니 x3
		cnt++;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 1, sum = 0;

	while (num != 0) //0이 될 때까지 계속 더함
	{
		sum = sum + num;

		printf("정수 입력 : ");
		scanf("%d", &num);

		if (num == 0) //0입력되는 순간 루프 종료
		{
			printf("합 : %d", sum);

			break;
		}
	}
	return 0;
}*/

//예제 6
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 0, y = 1;

	scanf("%d", &x);
	printf("%d단을 입력합니다.\n", x);
	
	while (y <= 9)
	{
		printf("%d x %d = %d\n", x, y, x * y); //구구단이니까 9까지만 받을거고
		y++; //9이하일 경우 계속 커지게
	}

	return 0;
}*/

//예제 7
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 0, y = 9; //9부터 시작하게 해야지

	scanf("%d", &x);
	printf("%d단을 역순으로 입력합니다.\n", x);

	while (y >= 1)
	{
		printf("%d x %d = %d\n", x, y, x * y); //구구단이니까 9까지만 받을거고
		y--; // 9부터 1까지 계속 작아지게
	}

	return 0;
}*/

//예제 8

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y = 0, z; //y= 0, z, sum = 0; //입력할 정수의 개수 : x, y : 입력하는 정수, z : 계속 더해지는
	float sum = 0; //소수점 출력해야돼서
	printf("입력할 정수의 개수 : ");
	scanf("%d", &x);

	while (x > y) //입력한 정수까지만 입력
	{
		y++;
		printf("%d번째 정수를 입력합니다.", y);
		scanf("%d", &z);
		sum += z; //평균을 구해주기 위해서 더함
	}

	printf("평균 : %f\n", sum / x); //평균 = 자료의 총합 / 자료의 개수

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, sum = 1;
	printf("5개 정수 차례대로 입력 : ");
	scanf("%d", &x);

	while (x)
	{
		sum += x;
			if (x >= 1)
			{
				printf("위를 다 더한 결괏값은 %d입니다.", sum);
				break;
			}
			else
				printf("1 이상의 수만 입력할 수 있습니다. 재입력하세요");
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int i = 1;
	int o;

	while (i <= 5) //5째줄까지
	{
		int o = 1; //o = ○
		while (o < i) 
		{
			printf("○");
			o++;
			
		}
		printf("*\n");
		i++;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1;
	int sum = 0;

	while (x != 0)
	{
		printf("수를 입력하세요: ");
		scanf("%d", &x);
		sum += x;
	}

	printf("총 합은 %d입니다.\n", sum);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num = 0, sum = 0;

	do
	{
		sum += num;
		num = num + 2;

	}while (num <= 100); //do while은 명령문 먼저 실행 후 반복 여부 결정, 따라서 조건이 맞지 않아도 적어도 한 번은 돌아감

	printf("총 합 : %d \n", sum);
	
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 2, y = 1;
	
	scanf("%d", &x);
	printf("%d단을 입력합니다.\n", x); //몇 단을 구할 것인지

	do
	{
		printf("%d x %d = %d\n", x, y, x * y); //while문과 똑같이 작용
		y++;
	} while (x, y <= 9); //9단까지만
	
	return 0;
}