/*#include <stdio.h>
int main(void)
{
	int num = 0, i = 0;

	printf("�� ���� �Է��Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &i);
	while (num < i)
	{
		printf("Hello World\n");
		num++;
	}
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
#include <stdio.h>
int main(void)
{
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? : ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d���� ���� �����? : %d\n", num, total);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3�� ��� �Ǵ� 4�� ��� : %d\n", num);
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	double x = 1.6;
	double y = 2.7;
	int m = (int)x + (int)y;
	printf("%f %d\n", x += y, m);
}*/

/*#include <stdio.h>
int main(void)
{
	int num = 0;
	while (num < 10) {
		printf("%d\n", num);
		num++;
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num;
	{for (num = 0; num < 10; num++)
		printf("%d\n", num);
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int cnt = 0;
	while (cnt <= 10)
	{
		printf("%d", cnt);
		cnt++;
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int i, j, k;

	for (i = 0; i < 2; ++i)
	{
		printf("�ܺ�%4d\n", i);
		for (j = 0; j < 3; ++j)
			printf("��%2d %2d ", i, j);
		printf("\n");
		for (k = 2; k > 0; --k)
			printf("��%2d %2d ", i, k);
		printf("\n");
	} 

	return 0;
}*/

#include <stdio.h>
int main(void)
/*{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}*/
{
	int i = 1, j = 1;
	while (i <= 5)
	{
		while (j <= i)
		{
			printf("%d", j);
			j++;
		}
		i++;
		printf("\n");
	}
	return 0;
}