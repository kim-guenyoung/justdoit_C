/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[50];
	int i;
	int len = 0;

	printf("���ܾ� �Է� : ");
	scanf("%s", voca); //�ܾ �Է� �޾� �迭 voca�ӿ� ����


	for (i = 0; voca[i] != 0; i++) //�迭 voca �ӿ� �ƽ�Ű �ڵ忡�� 0�� ����Ű�� NULL���ڰ� ���� �������� ��� ����
		//���ڿ� ��� �� NULL���ڴ� ���� ���� ����ó�� �ڵ����� �����ȴ�.
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

	temp = ptr1; //ptr1���� temp�� �־��ְ�
	ptr1 = ptr2; //ptr1���� ptr2�� ����.
	ptr2 = temp; //�׸��� ptr2�� ���� �ٽ� temp ���̶� �ϸ� ptr2 ���� temp������ ptr1���� �ǰ�
	//ptr1 = ptr2�� ���� ptr1���� ptr2���� �ȴ�.

	printf("num1 : %d\nnum2 : %d", *ptr1, *ptr2); //�ּ� �� �ƴϰ� ���̴ϱ� * ���
	// ������ num1�� 10�� ������������ 20
	//num2�� 10�� ���ҽ������� 10�� �ȴ�. �� ���� ���� �ٲ��ִ� 10�� 20�� ���´�.
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int sec, hour, min;
	printf("��(second) �Է� : ");
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
	printf("10���� �Ҽ��� ����ϰڽ��ϴ�.\n");
	
	//�׷� �ϴ� �Ҽ� ��� �ÃE���� ¥��

	for (num = 2; cnt <= 10; num++) //num�� �׳� 1���� ��
	{
		for (i = 2; cnt <= num; i++) //i = num�� �Ҽ����� �ƴ��� �Ǻ����ֱ� ���� ��� ������ ��
		{
			if (i == num) 
			{
				printf("%d ", num); //�� ���� ���� �� �㿡 ������ �������� if�� ������ break
				cnt++;
			}
			if (num % i == 0) //���࿡ ��� Ŀ���ٰ� ���������� �Ҽ��� �ƴϴϱ�.
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
	printf("�������� ¦���ܸ� ����ϰڽ��ϴ�.\n");

	for (x = 2; x <= 9; x++)
	{
		if (x % 2 == 0)
			printf("%d��\n", x);
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
//���� 11654
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str;
	scanf("%c", &str);

	printf("%d", str);
}*/
//���� 10872
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
	printf("���� �Է� : ");
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

	for (i = start - 1; i < end; i += step) //�迭�� 0���� �����̴ϱ� 1�� ����. �������� i�� ������Ű�� i�� ����� ����
	{
		if ((start < 1) || (end > 26))
		{
			printf("1���� 26������ ������ �Է��� �� �ֽ��ϴ�.\n���α׷��� �����մϴ�.");
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
	int* pnum; //pnum�� 100�� ����Ŵ
	pnum = &num1; //num1�� �ּ� �� ����
	(*pnum) += 30; //��ü�� ��ȣ�ϱ� �� ���� 30�� �����ִ� �ǵ�

	pnum = &num2;
	(*pnum) -= 30; //�̰� num2 100���� 30�̶� ���� ���ϱ�

	printf("num1 : %d, num2 : %d\n", num1, num2); //130 70
	return 0;
}*/

#include <stdio.h>
int main(void)
{

}