/*#include <stdio.h>
int main(void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num : %d", num);
}
int SimpleFuncOne(void) //�������� (x), ��ȯ�� (o)
{
	//���⼭ num�� ���������� main�Լ��� num�� �ٸ� num
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
	printf("num : %d\n", num);//0(���������� �⺻������ 0���� �ʱ�ȭ�ȴ�.)
	Add(3);
	printf("num : %d\n", num); //Add�Լ� ���ؼ� 3�� ������
	num++;
	printf("num : %d\n", num);
	return 0;
}*/
/*
#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0; //static ������ �ʱ�ȭ���� ������ 0���� �ʱ�ȭ�Ǵµ�,
	int num2 = 0; //�׳� ������ �ʱ�ȭ���� ������ ������ ������ �ʱ�ȭ��.
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
		printf("�Է� : ");
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
	printf("���� ������ �ְ��� : %d\n", max);
	printf("���� ������ ������ : %d\n", min);
	printf("���� ������ ��� : %f\n", sum / 5);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	char voca2[100] = { 0 }; //�̰� �����ָ� �ڿ� �̻��� ���� ���� �ʱ�ȭ �ʼ�!!
	char i;
	int len = 0;

	printf("���ܾ� �Է� : ");
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