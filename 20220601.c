/*#include <stdio.h>
int main(void)
{
	int max = 0;
	int min = 0;
	double sum = 0;
	int score[20][3];
	int i, j;
	int cnt = 0;
	for (i = 0; i < 20; i++)
	{
		cnt++;

		for (j = 0; j < 3; j++)
		{	
			if (j = 1)
			{
				printf("�л� %d�� ���� ������ �Է��ϼ��� : ", cnt);
				scanf_s("%d", &score[i]);
			}

			if (j = 2)
			{
				printf("�л� %d�� ���� ������ �Է��ϼ��� : ", cnt);
				scanf_s("%d", &score[i]);
			}
			if (j = 3)
			{
				printf("�л� %d�� ���� ������ �Է��ϼ��� : ", cnt);
				scanf_s("%d", &score[i]);
			}
			sum += score[i][j];

			if (score[i][j] > max)
				max = score[i][j];
			if (score[i][j] < min)
				min = score[i][j];
			if (cnt == 20)
				printf("��� : %f", sum / 20);
		}
		printf("�ִ� : %d\n", max);
		printf("�ּڰ� : %d\n", min);
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL;
	p = arr;

	printf("*p + 1�� �ּ� : %p, *p + 1�� ������ �� : %d\n", &*p + 1, *p + 1);
	printf("*(p + 1)�� �ּ� : %p, *(p + 1)�� ������ �� : %d\n", &*(p + 1), *(p + 1));
	printf("*p++�� �ּ� : %p, *p++�� ������ �� : %d\n", &*p++, *p++);//�տ��� ���������̶� 200���� �ٲ���µ� 
	printf("(*p)++�� �ּ� : %p, (*p)++�� ������ �� : %d", &(*p)++, (*p)++); //*p+1�̶� �Ȱ��� ��
	//printf("*++p�� �ּ� : %p, *++p�� ������ �� : %d", &*++p, **++p);
	//printf("++*p�� �ּ� : %p, ++*p�� ������ �� : %d", &*++ * p, *++ * p);
	return 0;
}