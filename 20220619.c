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
	printf("���� �Է�(0 ������ ����) : ");
	while (1)
	{
		scanf_s("%d", &num);
		if (num == 0)
			break;
		if (num > 8)
		{
			printf("1���� 8������ �Է��� �� �ֽ��ϴ�.");
			break;
		}
		printf("%d��(��) %d��° ��ġ�� �ֽ��ϴ�.", num, find(arr, num));
	}
	return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	printf("���ܾ� �Է� : ");
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

void binary(int num) //2���� ��ȯ �Լ�
{
	if (num > 1) //�Է��� �� 0���� ũ�ٰ� �ϸ�, �� ���ڸ� ���� 0�� ��µǴϱ�
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
	printf("���� �Է� : ");
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
	printf("���� �Է� : ");
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
	printf("1~100 ������ ���� �Է� : ");
	while(1)
		scanf_s("%d ", &num);
}*/
/*
#include <stdio.h>
int main(void)
{
	int cnt = 1, num = 2, i;
	for (num = 2; cnt <= 10; num++) //10�� ����̴ϱ� 10���� �ϰ�, num�� 1�� ó�������� ���ϱ� ������ 2���� ����
	{
		for (i = 2; i <= num; i++)
		{
			
			if (num == i) //i�� �Ҽ���, �ݺ��� �Ǹ鼭 i++�� �Ҽ����� Ȯ�� 
				//���ʿ� i�� ���������� ���� �ִ��� Ȯ���ϱ� ���� ����
			{
				printf("%d ", num);
				cnt++;
			}
			if (num % i == 0) //���� Ŀ���µ� ���࿡ ���⼭ ����������� ���X
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
	printf("���� �� ȭ�� : 1\nȭ�� �� ���� : 2\n");
	scanf_s("%d", &sel);


	if (sel == 1)
	{
		printf("���� �Է� : ");
		scanf_s("%d", &temperature);
		printf("���� �� ȭ�� : %f", CelToFah(temperature));
	}
	if (sel == 2)
	{
		printf("ȭ�� �Է� : ");
		scanf_s("%d", &temperature);
		printf_s("ȭ�� �� ���� : %f", FahToCel(temperature));
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
		printf("���ĺ��� �Է��� �� �ֽ��ϴ�.");
}
int main(void)
{
	char alphabet;
	printf("���ĺ� �Է� : ");
	scanf_s("%c", &alphabet);

	printf("%c", to_upper_lower(alphabet));
	return 0;
}*/
/*
#include <stdio.h>
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

/*#include <stdio.h>
int main(void)
{
	// 4. �������� ����
	int a[4] = { 100, 200, 300, 400 };
	int* p = a;
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3); //�ּҰ� ����
	p++;
	printf("%p\n", p); //p++�� ���� �ε��� 1���� ��

	*(a + 1) += 100; //���⵵ ù��° ���� +100�ε� �Ʊ� �������� 300�̾ 400���
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);
	p--;
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3)); //p++�� �ڿ� p--�ϱ� �ٽ� ����ġ�� ���ƿ�
	//100 400 300 400�� ��µǴ� ����
}*/

#include <stdio.h>

int main(void)
{
	int arr[10] = { 10, 14, 3, 1, 9, 2, 6, 13, 7, 11 };
	int i, j, num, temp;

	int* ptr;
	printf("���� �� : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n���� �� : ");
	//�������İ� ������ �̿�
	ptr = &arr;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)//���� ��� 3���� ���� �ִ����� �� �� 2�� ���ִ� ��ó�� �굵 9��
		{
			if (*(ptr + i) < *(ptr + j)) //���� ����Ʈ ���̶� ��� �����ָ鼭 ū ���� �������� �ѱ�
				//for�� �Ἥ �ڷ� ��� �з�����
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