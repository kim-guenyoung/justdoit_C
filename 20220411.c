//�ڷ������� ǥ���� �� �ִ°� �ٸ��� �� �ڷ����� ������ �� �ִ� �޸𸮰����� ũ�⿡ ���� ���� ���� �޶����� �������. char int double
//signed unsigned ���� Ȯ����Ű��/ ���� ���� �������� ���� ���� (���ݰ��� �Ǵ� �׷��� ����) 1111 : -1 //overflow �����
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
	printf("%-8s %14s %5s \n", "�̸�", "���ڰ���", "�г�");
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� �Է� : ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ��� : ");
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
	}//���⼭ 3��
	while (num < 5)
		printf("Hello world! %d\n", num++);
}//���⼭ 2��*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0, cnt = 1;

	scanf("���� �Է� : %d", &num);
	
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
	scanf("���� �Է� : %d", &num);
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

	while (cnt <= num) { //�Է��� ������ �۰ų� ���� �������� ���
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
		sum += cnt;//�Էµ� ���ڱ����� �߰��� ���ϱ�
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

	printf("���� �Է� : ");
	scanf("%d", &num);

	while (cnt < num) //����� �������� ��ŭ ��� 
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
	int num = 0, cnt = 1; //1 �̻��� ������ ������ cnt = 1

	printf("���� �Է� : ");
	scanf("%d", &num);

	while (cnt <= num) //�Է¹��� ���� ũ�ų� ������ ������
	{
		printf("%d\n", cnt * 3); //3�� ����̴� x3
		cnt++;
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 1, sum = 0;

	while (num != 0) //0�� �� ������ ��� ����
	{
		sum = sum + num;

		printf("���� �Է� : ");
		scanf("%d", &num);

		if (num == 0) //0�ԷµǴ� ���� ���� ����
		{
			printf("�� : %d", sum);

			break;
		}
	}
	return 0;
}*/

//���� 6
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 0, y = 1;

	scanf("%d", &x);
	printf("%d���� �Է��մϴ�.\n", x);
	
	while (y <= 9)
	{
		printf("%d x %d = %d\n", x, y, x * y); //�������̴ϱ� 9������ �����Ű�
		y++; //9������ ��� ��� Ŀ����
	}

	return 0;
}*/

//���� 7
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 0, y = 9; //9���� �����ϰ� �ؾ���

	scanf("%d", &x);
	printf("%d���� �������� �Է��մϴ�.\n", x);

	while (y >= 1)
	{
		printf("%d x %d = %d\n", x, y, x * y); //�������̴ϱ� 9������ �����Ű�
		y--; // 9���� 1���� ��� �۾�����
	}

	return 0;
}*/

//���� 8

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, y = 0, z; //y= 0, z, sum = 0; //�Է��� ������ ���� : x, y : �Է��ϴ� ����, z : ��� ��������
	float sum = 0; //�Ҽ��� ����ؾߵż�
	printf("�Է��� ������ ���� : ");
	scanf("%d", &x);

	while (x > y) //�Է��� ���������� �Է�
	{
		y++;
		printf("%d��° ������ �Է��մϴ�.", y);
		scanf("%d", &z);
		sum += z; //����� �����ֱ� ���ؼ� ����
	}

	printf("��� : %f\n", sum / x); //��� = �ڷ��� ���� / �ڷ��� ����

	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x, sum = 1;
	printf("5�� ���� ���ʴ�� �Է� : ");
	scanf("%d", &x);

	while (x)
	{
		sum += x;
			if (x >= 1)
			{
				printf("���� �� ���� �ᱣ���� %d�Դϴ�.", sum);
				break;
			}
			else
				printf("1 �̻��� ���� �Է��� �� �ֽ��ϴ�. ���Է��ϼ���");
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int i = 1;
	int o;

	while (i <= 5) //5°�ٱ���
	{
		int o = 1; //o = ��
		while (o < i) 
		{
			printf("��");
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
		printf("���� �Է��ϼ���: ");
		scanf("%d", &x);
		sum += x;
	}

	printf("�� ���� %d�Դϴ�.\n", sum);

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

	}while (num <= 100); //do while�� ��ɹ� ���� ���� �� �ݺ� ���� ����, ���� ������ ���� �ʾƵ� ��� �� ���� ���ư�

	printf("�� �� : %d \n", sum);
	
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x = 2, y = 1;
	
	scanf("%d", &x);
	printf("%d���� �Է��մϴ�.\n", x); //�� ���� ���� ������

	do
	{
		printf("%d x %d = %d\n", x, y, x * y); //while���� �Ȱ��� �ۿ�
		y++;
	} while (x, y <= 9); //9�ܱ�����
	
	return 0;
}