//도전 2
/*#include <stdio.h>
int main(void)
{
	//슈퍼에 들러 크림빵(500원), 새우깡(700원), 콜라(400원)을 사려고 한다.
	//잔돈을 하나도 남기지 않고 이 세 가지 물건을 하나 이상씩 반드시 구입하려면
	//어떻게 구매를 진행해야 하는가 ?
	int cream, shrimp, coke;
	printf("현재 당신이 가지고 있는 금액 : 3500\n");
	for (cream = 1; cream <= 7; cream++) //최소 한 개 이상씩 구매해야하므로 1을 시작으로
	{
		for (shrimp = 1; shrimp <= 5; shrimp++)
		{
			for (coke = 1; coke < 9; coke++)

				if ((cream * 500) + (shrimp * 700) + (coke * 400) == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", cream, shrimp, coke);
		}
	}
	printf("어떻게 구입하시겠습니까?");
	
	return 0;
}*/

//도전1
// 두 개의 정수를 입력 받아서 최대 공약수(GCD)를 구하는 프로그램을 작성해 보자.
/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i = 1;
	int A, B;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	A = num1 % i;
	B = num2 % i;
	//정수 num1과 num2의 최대공약수는 num1이나 num2 보다 클 수 없다.
	//num1 또는 num2를 num1과 num2의 최대공약수로 나누면 나머지는 0이다.
	//유클리드 호제법을 기반으로도 문제를 해결해보자.
	if (num1 < num2)
	{
		for (i = 1; i <= num1; i++)
			if (A == 0 && B == 0)
			{
				printf("%d ", i);
			}
		for (i =1; i<= num2; i++)
			if (A == 0 && B == 0)
			{
				printf("%d ", i);
			}
	}
	printf("\n");
	return 0;
}
*/
/*#include <stdio.h>

void change_time(int total_sec, int* hour, int* min, int* sec) //change_time에서 포인터 변수 hour, min, sec 만들기
{
	*hour = total_sec / 3600;
	*min = total_sec % 3600 / 60;
	*sec = total_sec % 3600 % 60;
}
int main(void)
{
	int hour, min, sec, total_sec; 
	
	printf("총 초(sec)를 입력 : ");
	scanf_s("%d", &total_sec);

	change_time(total_sec, &hour, &min, &sec); //main 함수에 주소 값 전달

	printf("%d초는 %d시간 %d분 %d초입니다.", total_sec, hour, min, sec);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	A:
		printf("1 : 더하기, 2 : 빼기, 3 : 곱하기, 4 : 나누기\n");
		scanf_s("%d", &operator); //1에서만 4까지

		if (operator == 1)
		{
			printf("더하기");
		}
		else
		{
			if (operator == 2)
			{
				printf("뺴기");
			}
			else
			{
				if (operator == 3)
				{
					printf("곱하기");
				}
				if (operator == 4)
				{
					printf("나누기");
				}
				else
					printf("1부터 4까지만 입력할 수 있습니다.\n 다시 입력해주세요.");
				goto A;
			}
			return 0;
		}
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	while (1)
	{
		printf("1 : 더하기, 2 : 빼기, 3 : 곱하기, 4: 나누기, 0 : 종료");
		scanf_s("%d", operator);
	}
	if (operator == 1)
	{
		printf("더하기");
	}
	else if (operator == 2)
	{
		printf("뺴기");
	}
	else if (operator == 3)
	{
		printf("곱하기");
	}
	else if (operator == 4)
	{
		printf("나누기");
	}
	else if (operator == 0)
		printf("종료");
	else
		printf("1부터 4까지만 입력할 수 있습니다.\n 다시 입력해주세요.");

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	while(1)
	{ 
		printf("1 : 더하기, 2 : 빼기, 3 : 곱하기, 4: 나누기, 0 : 종료\n");
		scanf_s("%d", &operator);

		switch (operator)
		{
		case 1:
			printf("더하기\n");
			break;
		case 2:
			printf("빼기\n");
			break;
		case 3:
			printf("곱하기\n");
			break;
		case 4:
			printf("나누기\n");
			break;
		case 0:
			printf("종료\n");
			break;

		default:
			printf("1부터 4까지만 입력할 수 있습니다. 다시 입력해주세요.");
		}
		if (operator == 0)
			break;
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int score = 0;

	pritnf("학점을 입력하세요 : ");
	scanf_s("%d\n", score);

	switch (score / 10)
	{
	case 10:
		printf("100점도 A");
		break;
	case 9: //앞자리가 9면 A
		printf("90점 이상은 A\n");
		break;
	case 8: //8로 시작하면 B
		printf("80점 이상 90점 미만은 B\n");
		break;
	case 7:
		printf("70점 이상 80점 미만은 C\n");
		break;
	case 5:
		printf("50점 이상 70점 미만은 D\n");
		break;
	default: //나머지는 F
		printf("F입니다.");
	}
	return 0;
}