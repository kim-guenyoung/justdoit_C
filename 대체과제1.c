/*#include <stdio.h>
int main(void)
{
	printf("������ ����ũ��(����Ʈ): char - %d\n", sizeof(char));
	printf("������ ����ũ��(����Ʈ): short - %d\t", sizeof(short));
	printf("int - %d \t", sizeof(int));
	printf("long - %d\t\n", );
	printf("�Ǽ��� ����ũ��(����Ʈ): float - %d\t", sizeof(float));
	printf("double - %d\t", sizeof(float));
	printf("long double - %d", sizeof(double));
}*/

//���� �Է��ϸ� �ٲٴ�~
/*#include <stdio.h>
int main(void)
{
	int min;
	int hour, day;
	printf("��(min)�� �Է��ϼ��� : ");
	scanf_s("%d", &min);

	day = min / 60 / 24;
	hour = min / 60 % 24 % 60;
	min = min % 60;
	
	printf("%d�� %d�ð� %d��", day, hour, min);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("ù ��° ���� : ");
	scanf_s("%d", &num1);
	printf("�� ��° ���� : ");
	scanf_s("%d", &num2);

	if (num1 * num2 < 0)
		printf("\n���� ��ȣ�� �ٸ���.\n");
	if (num1 > num2)
		printf("�� ���� ���� %d�̴�.", num1 - num2);
	else
		printf("�� ���� ���� %d�̴�.", num2 - num1);
}*/
/*
#include <stdio.h>

int main(void)
{
	int num;
	int flag = 0;
	printf("���� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("(2�� ���)");
		flag++;
		if (flag == 1)
			printf("-");
	
	if (num % 3 == 0)
		printf("(3�� ���)");
		flag++;
		if (flag == 2)
			printf("-");
	
	if (num % 5 == 0)
		printf("(5�� ���)");
		if (flag == 3)
			printf("-");
	
	if (num % 7 == 0)
		printf("(7�� ���)");
		if (flag == 4)
			printf("-");
	
	if (num % 9 == 0)
		printf("(9�� ���)");
		if (flag == 5)
			printf("-");

}*/


/*#include <stdio.h>
int main(void)
{
	double weight, height;
	double sumw = 0, sumh = 0; //�ջ� �����̴ϱ� 0���� �ʱ�ȭ
	int cnt = 0;
	double avrw = 0, avrh = 0;
	printf("�Ʒ��� ������(kg)�� Ű(cm)�� �Է��ϼ���.\n");


	while (1)
	{
		cnt++; //���� ������ŭ!
		
		scanf_s("%lf %lf", &weight, &height);
		sumw += weight;
		sumh += height;
		
		if (height < 0 || weight < 0) //���� ������ Ż��!
			break;

	}
	avrw = sumw / (cnt - 1);
	avrh = sumh / (cnt - 1);
	printf("��� ������(kg) : %.2lf ", avrw); 
	printf("��� Ű(cm) : %.2lf", avrh);
	return 0;
}*/


/*
//���� �߿� �ݵ�� �˾Ƶμ���!!!!
#include <stdio.h>
int main(void)
{
	int num, i;
	int cnt= 0; //��� ����
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if ((num % i) == 0)
			cnt++;
	}
		if (cnt == 2) //���� ����� ������ 2���� �Ҽ��Դϴ�!
			printf("�Ҽ��Դϴ�.");
		
		else
			printf("�Ҽ��� �ƴմϴ�,");
		
		return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int line;
	int i, j;
	printf("��(line) �� : ");
	scanf_s("%d", &line);
	
	for (i = 1; i <= line; i++) //i�� �� ���������� ����
	{
		for (j = 1; j <= line - i; j++) //���� ���� + * = ������ �� ����
		//line�� index ��ȣ ����
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i-1 ; j++) //�� ���� 3��° ���� 3*2-1����� ��
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int m, n;
int SignInt(int m, int n)
{
	if (m > n)
		return m - n;
	else
		return n - m;
}
int main(void)
{
	printf("ù ��° ���� : ");
	scanf_s("%d", &m);
	printf("�� ��° ���� : ");
	scanf_s("%d", &n);
	{
		if (m * n > 0)
			printf("��ȣ�� ����.");
		else
			printf("���� ��ȣ�� �ٸ���.\n");
	}
	printf("�� ���� ���� %d�̴�.", SignInt(-35, 52));
}*/
/*
#include <stdio.h>
int is_prime(int num)
int main(void)
{
	int num, i;
	int cnt;
	if ((num % i) == 0)
}
int is_prime(int num)
{
	if(num % i == 0)
}
printf("���ڸ� �Է��ϼ��� : ");
scanf_s("%d", &num);

for (i = 1; i <= num; i++)
{
	if ((num % i) == 0)
		cnt++;
}
if (cnt == 2) //���� ����� ������ 2���� �Ҽ��Դϴ�!
printf("�Ҽ��Դϴ�.");

else
printf("�Ҽ��� �ƴմϴ�,");

return 0;
*/

/*#include <stdio.h>
#define MAX 30
int arr1[][];

int main(void)
{
	int matrix[][];
	int row, col;
	printf("�迭�� ��� �� : ");
	scanf_s("%d %d", &row, &col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			matrix[i][col] += matrix[i][j];
			matrix[row][j] += matrix[i][j];
			matrix[row][col] += matrix[i][j];
		}
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j <= col; j++)
			printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, seed, answer, cnt= 1, i;
	seed = time(NULL);
	srand(seed);
	num = rand() % 100;

	printf("1���� 200 ������ ���� �Է��ϼ��� : ");	
	scanf_s("%d", &i);
	while (1)
	{
		if (i > num)
		{
			cnt++;
			printf("�� �۽��ϴ�.\n");
		}
		if(i < num)
		{
			cnt++;
			printf("�� Ů�ϴ�.\n");
		}
		if (i == num)
			break;
		scanf_s("%d", &i);
		printf("�¾ҽ��ϴ�. %d�� ���� ���߾����ϴ�.", cnt);
			break;	
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int x, y;
	int z;
	printf("�� ���� �� �ܾ� ����ұ��? : ");
	scanf_s("%d", &z);
	
	for (y = 1; y <= 9; y++)
	{
		for (x = 2; x <= 9; x++)
		{
			printf("%d * %d = %d\t", x, y, x * y);
		}
		printf("\n");
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int num;
	int i;
	printf("�ֻ����� ������ Ƚ�� : ");
	scanf_s("%d", &num);
	int cnt[6] = { 0, 0, 0, 0, 0, 0 }; //�迭 0���� �� �ʱ�ȭ
	for (i = 0; i < num; i++)
	{
		int r = rand() % 6++; //1���� 6������ ���� ����
		cnt[r-1]++; //
	}
	for (i = 0; i < 6; i++)
	{
		printf("�� %d : ", i + 1);
		for (int j = 0; j < cnt[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}