/*#include <stdio.h>
int main(void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num : %d", num);
}
int SimpleFuncOne(void) //전달인자 (x), 반환값 (o)
{
	//여기서 num은 지역변수로 main함수의 num과 다른 num
	int num = 10;
	num++;//11
	printf("SimpleFuncOne num : %d\n", num);
	return 0;
}
int SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;

	num1++, num2--; //21 29
	printf("num1 & num2 : %d %d\n", num1, num2);
	return 0;
}
*/
/*
#include <stdio.h>

int num;
void Add(int val)
{
	num += val;
}

int main(void)
{
	printf("num : %d\n", num);//0(전역변수는 기본적으로 0으로 초기화된다.)
	Add(3);
	printf("num : %d\n", num); //Add함수 통해서 3이 더해짐
	num++;
	printf("num : %d\n", num);
	return 0;
}*/
/*
#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0; //static 변수는 초기화하지 않으면 0으로 초기화되는데,
	int num2 = 0; //그냥 변수는 초기화하지 않으면 쓰레기 값으로 초기화됨.
	num1++, num2++;
	printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}*/
/*
#include <stdio.h>

int Factorial(int num)
{
	if (num <= 1)
		return 1;
	else
		return num * Factorial(num - 1);
}
int main(void)
{
	printf("1! = %d\n", Factorial(1));
	printf("2! = %d\n", Factorial(2));
	printf("3! = %d\n", Factorial(3));
	printf("4! = %d\n", Factorial(4));
	printf("9! = %d\n", Factorial(9));
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5];
	int max, min, i;
	double sum = 0;
	for (i = 0; i < 5; i++)
	{
		printf("입력 : ");
		scanf_s("%d", &arr[i]);
	}
	max = min = sum = arr[0];
	for (i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("국어 점수의 최고점 : %d\n", max);
	printf("국어 점수의 최저점 : %d\n", min);
	printf("국어 점수의 평균 : %f\n", sum / 5);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	char voca2[100] = { 0 }; //이거 안해주면 뒤에 이상한 문자 나옴 초기화 필수!!
	char i;
	int len = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	for (i = 0; voca[i] != 0; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		voca2[len - (i + 1)] = voca[i];
	}
	printf("%s", voca2);
	return 0;
}*/