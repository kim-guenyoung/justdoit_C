/*#include <stdio.h>
int main(void)
{
	int num1 = 10;

	printf("%p\n", &num1); //0000002C52FCF884��� num1�� �޸� �ּҸ� �����

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int* numPtr; //������ ���� ����
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr); //�� �� num1�� �ּҸ� �ǹ��ϴϱ� ���� �ּ� ���� ��� �� ����!

	printf("%p\n", &num1); //��� ������ = �޸� �ּ� ���̶� �

	return 0;
}*/
/*
#include <stdio.h>


int main(void)
{
	int row, col;
	int arr[30][30] = { 0, };
	int i, j;

	printf("�迭�� ��� �� : "); //row = �� col = ��
	scanf_s("%d %d", &row, &col);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			scanf_s("%d", &arr[i][j]);

	}
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	int i = 1;
	int dice;

	printf("�ֻ����� ������ Ƚ�� : ");
	scanf_s("%d", &num);
	srand(time(NULL)); //���� �ð��� �������� �ʱ�ȭ �׷��� ������ �������

	while (i <= num)
	{
		i++;
	}
	for (dice = 1; dice <= 6; dice++)
	{
		int cnt = 1;
		cnt += rand() % num + 1;

		printf("�� %d : %d\n", dice, rand() % num + 1);
		//rand() % n �̰Ŵ� 0���� n-1������
		//(rand() % n) + 1�� 1���� n������ �ѵ� �� ���� �� ���� ���� �����ϱ� ������ ���
	}
	return 0;
}*/



