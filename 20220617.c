/*#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL; //p�� int�� �迭�̴�.
	p = arr;

	printf("*p + 1�� �ּ� : %p\n*p + 1�� ������ �� : %d\n", *p + 1, *p + 1);
	printf("*(p + 1)�� �ּ� : %p\n*(p + 1)�� ������ �� : %d\n", *(p + 1), *(p + 1)); //��ȣ�� �����ָ�
	printf("*p++�� �ּ� : %p\n*p++�� ������ �� : %d\n", *p++, *p++);
	printf("(*p)++�� �ּ� : %p\n(*p)++�� ������ �� : %d\n", p, *p + 1); //�� 100����....�׳� arr[0] �����ؼ� �� �������� �޸� ���� �����Ѱ���..
	printf("*++p�� �ּ� : %p\n*++p�� ������ �� : %d\n", *++p, *++p); //�� 200����
	printf("++*p�� �ּ� : %p\n++*p�� ������ �� : %d\n", p, *p + 1);
	return 0;
}*/
/*
#include <stdio.h>
int Add(int val);
int num = 1;
int main(void)
{
	int num = 5;
	printf("num : %d\n", Add(3));//12
	printf("num : %d\n", num + 9); //14
	return 0;
}
int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}*/
//���������� �������� ���İ�Ƽ �ڵ尡 �ȴ�.
//�׸��� ���������� static ������ ������, ����� �Լ� �������� ������ ����������,
//�� 1�� �ʱ�ȭ�ǰ�, ���α׷� ����� ������ �޸� ������ �����ϰ� �ȴ�.
//����Լ��� �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ��� �ǹ��ϴµ�, �׷��� ������ ���纻�� ����� �����Ѵٰ� �����ϸ� �ȴ�.
//����Լ��� static�� �ʿ����!

//���ܾ� ������
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
		len++;

	for (i = 1; i <= len; i++)
		voca2[len - i] = voca[i - 1];
	printf("%s", voca2);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 7;
	int* pnum;

	pnum = &num;
}*/
/*
int main(void)
{
	int num = 2, i, prime = 2;
	for (i = 0; i < 10; i++)
	{
		while (1)
		{
			if(num % prime == 0)
			{
				if (num == prime)
				{
					printf("%d ", prime);
					num++;
					prime = 2; //prime 2�� ��� �ʱ�ȭ
					break;
				}
				else
				{
					num++;
					prime = 2;
				}
			}
			else
				prime++;
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;
	//printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

	//printf("%d ", *ptr); //11
	//ptr++; //22
	//printf("%d ", *ptr); //22
	//ptr++;
	//printf("%d ", *ptr); //33
	//ptr--;
	//printf("%d ", *ptr); //22
	//ptr--;
	//printf("%d ", *ptr); //11

	printf("%d %d %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2)); //11 22 33
	printf("%d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2)); // 11 22 33
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]); //11 22 33
	printf("%d %d %d\n", arr[0], arr[1], arr[2]); //11 22 33
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);
	
	return 0;
}*/

//���� 5. ���� ����
/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 4, 3, 5, 1, 2 };
	int i, j;
	int temp;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
				{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				}
		}
	}
	for(i = 0; i<5; i++)
		printf("%d ", arr[i]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	int binary[20] = { 0, };
	int position = 0;
	
	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = position - 1; i >= 0; i--)
		printf("%d ", binary[i]);
	
	printf("\n");

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	int binary[20] = { 0, };
	int position = 0;

	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = 0; i <= position - 1; i++)
		printf("%d ", binary[i]);

	printf("\n");

	return 0;
}*/
//n���� ���� �Է� �� �� ���ϱ�
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	int i;
	int sum = 0;

	for (i = 1; i <= num; i++)
	{
		scanf_s("%d", &i);
		sum += i;
	}
	printf("%d ", sum);
	return 0;
}*/
/*
//���̱ⱸ �ٽ�!
#include <stdio.h>
int main(void)
{
	int a = 5, b = 10, c = 23, d = 15, e = 48;
	int rides[5] = { a, b, c, d, e };
	int time[5] = { 2, 2, 3, 2, 1 };
	char sum[5] = { 0, };
	int i, j, temp;

	for (i = 0; i < 5; i++)
	{
		sum[i] = rides[i] + time[i];
	}
	for(i = 0; i<5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (sum[j] > sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
		}
		if (sum[i] == 7)
			printf("a ");
		if (sum[i] == 12)
			printf("b ");
		if (sum[i] == 17)
			printf("d ");
		if (sum[i] == 26)
			printf("c ");
		if (sum[i] == 49)
			printf("e ");
	}
}
//�ٵ� if�� �Ⱦ��� �ϰ� ������, �̰� ���� ���� ����� ����*/

/*
#include <stdio.h>
int main(void)
{
	int i, j, temp;
	int arr[10] = { 10, 14, 3, 1, 9, 2, 6, 13, 7, 11 };
	printf("���� �� : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n���� �� : ");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}*/