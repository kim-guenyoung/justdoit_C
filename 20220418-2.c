//1��
/*#include<stdio.h>
int main(void)

{
	int num = 0;

	int cnt = 1;

	scanf_s("%d", &num);

	while (cnt <= num) { //�Է��� ������ �۰ų� ���� �������� ���
		printf("%d\n", cnt);
		cnt++;

	}
	return 0;
}*/

//2��
/*#include <stdio.h>
int main(void)
{
	int num = 1, cnt = 1, sum = 0;
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

//3��
/*#include <stdio.h>

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

//4��
/*#include <stdio.h>
int main(void)

{

	int num = 0, cnt = 1; //1 �̻��� ������ ������ cnt = 1
	printf("���� �Է� : ");

	scanf_s("%d", &num);
	while (cnt <= num) //�Է¹��� ���� ũ�ų� ������ ������
	{
		printf("%d\n", cnt * 3); //3�� ����̴� x3
		cnt++;
	}
	return 0;
}*/

//5��
/*#include <stdio.h>

int main(void)

{
	int num = 1, sum = 0;
	while (num != 0) //0�� �� ������ ��� ����
	{
		sum = sum + num;

		printf("���� �Է� : ");
		scanf_s("%d", &num);

		if (num == 0) //0�ԷµǴ� ���� ���� ����

		{
			printf("�� : %d", sum);
			break;
		}
	}
	return 0;
}*/
//6��
/*#include <stdio.h>

int main(void)
{
	int x = 0, y = 1;

	scanf_s("%d", &x);
	printf("%d���� �Է��մϴ�.\n", x);

	while (y <= 9)
	{
		printf("%d x %d = %d\n", x, y, x * y); //�������̴ϱ� 9������ �����Ű�
		y++; //9������ ��� ��� Ŀ����
	}

	return 0;
}*/
//8��
/*#include <stdio.h>

int main(void)
{
	int x, y = 0, z; //y= 0, z, sum = 0; //�Է��� ������ ���� : x, y : �Է��ϴ� ����, z : ��� ��������
	float sum = 0; //�Ҽ��� ����ؾߵż�

	printf("�Է��� ������ ���� : ");
	scanf_s("%d", &x);



	while (x > y) //�Է��� ���������� �Է�
	{
		y++;

		printf("%d��° ������ �Է��մϴ�.", y);
		scanf_s("%d", &z);

		sum += z; //����� �����ֱ� ���ؼ� ����
	}
	printf("��� : %f\n", sum / x); //��� = �ڷ��� ���� / �ڷ��� ����
	return 0;
}*/

//9��
/*#include <stdio.h>

int main(void)
{
	int num, i = 5, sum = 0;

	while (i--) //i�� �Է��� ������ ������ �ߴµ� �� ���� �Է��� ������ --

	{
		printf("�����Է� : ");
		scanf_s("%d", &num);

		sum += num;

		if (num < 1)
		{
			printf("1 �̻��� ������ �Է��� �� �ֽ��ϴ�. �ٽ� �Է����ּ���.\n");
			i += 1; //0�� �ԷµǸ� ��ȸ �ٽ� �ֱ�
		}
	}
	printf("�� ��: %d", sum);
	return 0;
}*/
//10��
/*#include <stdio.h>
int main(void)
{

int i = 1, o;
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

//10��
/*#include <stdio.h>
int main(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("! : %Lf\n", num);
	return 0;
}*/

//11��
/*#include <stdio.h>
int main(void)
{
	int x = 1, sum = 0;
	while (x != 0)
	{
		printf("���� �Է��ϼ���: ");
		scanf_s("%d", &x);

		sum += x;
	}
	printf("�� ���� %d�Դϴ�.\n", sum);
	return 0;
}*/

//12��
/*#include <stdio.h>
int main(void)
{
	int num = 0, sum = 0;

	do
	{
		sum += num;
		num = num + 2;

	} while (num <= 100); //do while�� ��ɹ� ���� ���� �� �ݺ� ���� ����, ���� ������ ���� �ʾƵ� ��� �� ���� ���ư�

	printf("�� �� : %d \n", sum);
	return 0;
}*/

//13��


/*
#include <stdio.h>
int main(void)
{
	int start, end, result = 0;

	printf("���۰� �� �Է� : ");
	scanf_s("%d %d", &start, &end);


	for (; start <= end; start++) //������ ���� ������ �� ������ ���Ұǵ� �ϳ��� ������Ű�鼭
		result += start;

	printf("�� �� : %d\n", result);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int n, i = 1, result = 1; //result �� 1���� 0������ 0�������� 0�� ��µ�.

	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		result *= i;

	printf("%d! = %d \n", n, result);
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int x, y;
	for (x = 2; x <= 9; x++) //9�ܱ�����
	{
		if (x % 2 != 0)
			continue; // ¦���ܸ� �����Ű�
		for (y = 1; y <= 9; y++)
		{
			if (x < y) //�ܺ��� ���ڰ� Ŀ���� �������� break
				break;
			printf("%d x %d = %d\n", x, y, x * y);
		}
		printf("\n");
	}
	return 0;
}*/

/*
//3��
#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0) //7�� ��� �Ǵ� 9�� ���
			printf("7�� ��� �Ǵ� 9�� ��� : %d\n", i);
	}
	return 0;
}*/

//4��
/*#include <stdio.h>
int main(void)
{
	int x, y;
	printf("���� ���ϰ� ���� ���� 2���� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);
	
	if (abs(x - y) >= 0) //������ ������ ���
	{
		printf("�� ���� �� = %d", abs(x - y));

	}
	return 0;
}*/

//9��
/*#include <stdio.h>
int main(void)
{
	int kor, eng, math, score;

	printf("����, ����, ���� ������ ������� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	score = (kor + eng + math) / 3; //score = �� ������ ���

	switch (score/10)
	{
	case 9: //���ڸ��� 9�� A
		printf("90�� �̻��� A\n");
		break;
	case 8: //8�� �����ϸ� B
		printf("80�� �̻� 90�� �̸��� B\n");
		break;
	case 7:
		printf("70�� �̻� 80�� �̸��� C\n");
		break;
	case 5:
		printf("50�� �̻� 70�� �̸��� D\n");
		break;
	default: //�������� F
		printf("F�Դϴ�.");
	}
	return 0;
}*/
//7��
/*#include <stdio.h>
int main(void)
{
	int x, y;
	int result;
	printf("���� ���� �� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);

	result = (x > y) ? x - y : y - x; //���࿡ ó�� �Է��� ���� �� ũ�� �տ��� �� ���� �װ� �ƴϸ� �ڿ��� �� ���� ��
	printf("�� : %d\n", result);
	
	return 0;
}*/
//8��
/*#include <stdio.h>
int main(void)
{
	int A = 0, Z = 0;
	
	printf("9 ������ �ڿ����� �Է����ּ���\n");
	scanf_s("%d %d", &A, &Z);

	if (A + Z == 9) //(10A + Z) + (10Z + A) = 99���� �̿��� �� ���� ���ָ� A + Z = 9
	{
		printf("%2d%d\n", A, Z); //�ڸ��� ����
		printf("+%d%d\n", Z, A);
		printf("---\n");
		printf(" 99");

	}
	else
		printf("Ʋ�Ƚ��ϴ�.\n*hint) A + Z = 9�� ���� �Է��ϸ� ���� ���Ϳ�");

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int score, kor, eng, math;

	printf("����, ����, ���� ������ ������� �Է����ּ��� : ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	score = (kor + eng + math) / 3;

	if (score >= 90)
		printf("90�� �̻��� A");

	else if (score >= 80)
		printf("80�� �̻� 90�� �̸��� B");

	else if (score >= 70)
		printf("70�� �̻� 80�� �̸��� C");

	else if (score >= 50)
		printf("50�� �̻� 70�� �̸��� D");

	else
		printf("50�� �̸��� F");
	
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int time, hour, min, sec;
	printf("�ʸ� �Է��ϼ��� : ");
	scanf_s("%d", &time);

	hour = time / 3600; //�Է��� �ð� 3600(1�ð��� 3600��)
	min = time % 3600 / 60; //hour�� ������
	sec = time % 3600 % 60; //min �� ������

	printf("�� : %d, �� : %d, �� : %d", hour, min, sec);
	return 0;
}
/*
#include <stdio.h>
int main(void)
{

	int a = 20;
	int result;
	result = --a - 5;
	printf("%d", result);
	return 0;
}
*/