/*#include <stdio.h>
int main(void)
{
	int time, work_day, work_time, tax = 0;
	int wage = 0;
	//time : �ٹ��ü�, work_time : �ٹ��ð���
	printf("�ٹ��ü� : ");
	scanf_s("%d", &time);
	printf("�ٹ���(1 ����, 2 �ָ� : ");
	scanf_s("%d", &work_day);
	printf("�ٹ��ð���(1 �ְ�, 2 �߰�) : ");
	scanf_s("%d", &work_time);
	{
		if (work_day == 1) //�ٹ����� �����̸�
			wage = 9500 * time;
		{
			if (work_time == 2) //�ٹ��ð��밡 �߰��̸�
				wage = 9500 * time * 1.1; //10% ����
		}
		if (work_day == 2) //�ٹ����� �ָ��̸�
			wage = 11000 * time;
		{
			if (work_time == 2) //�ٹ��ð��밡 �߰��̸�
				wage = 11000 * time * 1.1;
		}

	}

	if (time >= 10) //10�ð� ������
		wage += 30000; //30000�� Ư������

	if (wage > 100000) //�ϴ��� 100000�� �Ѿ�� ���� ����
		tax = wage * 0.05;


	if (tax == 0)
		printf("�ϴ��� %d��, ���� ����, �Ǽ��ɾ��� %d��", wage, wage-tax);
	else
		printf("�ϴ��� %d��, ������ %d��, �Ǽ��ɾ��� %d��", wage, tax, wage - tax);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num, i, j;
	int cnt = 1;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			{
				if ((num % i) == 0)
					cnt++;
				if (cnt > 2)
					break;
			}

		}
		if (cnt == 2)
			printf("%d ", i);
		continue;
	}
	return 0;
}*/

#include <stdio.h>
int a;
int b;
int i;

int main(void)
{

	printf("�Է� : ");
	scanf_s("%d %d", &a, &b);
	
	for (i = a; i <= b; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}



int is_prime(int num)
{
	for (i = a; i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}