/*#include <stdio.h>
int arr[] = { 4, 1, 2, 5, 7, 3, 6, 8 };
int num;
int i;

int find(int arr[], int n)
{
	int i;

	for (i = 0; i <= 7; i++)
	{
		if (n == arr[i])
			return i + 1; //i ���� �ε��� ���̴ϱ� +1�� ���־�ߵ�. 0���� �����̴ϱ�
	}
}
int main(void)
{
	while (1)
	{
		printf("1���� 8������ ���� �Է��ϼ���(0 ������ ����) : ");
		scanf_s("%d", &num);
		if (num > 8)
		{
			printf("%d��(��) �������� �ʽ��ϴ�.\n", num);
			continue;
		}
		if (num == 0)
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
			printf("%d��(��) %d ��°�� �ֽ��ϴ�.\n", num, find(arr, num));

	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000
int main(void)
{
	char voca[MAX];
	int i;
	int max = 0;

	printf("���ܾ� �Է� : ");
	scanf("%s", voca);

	for (i = 0; i <= MAX; i++)
		if (max <= voca[i])
			max = voca[i];

	printf("�ƽ�Ű�ڵ� ���� ���� ū ������ ���� %d�Դϴ�.", max);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

int main(void)

{

	char voca[MAX];

	int i;

	int max = 0;



	printf("���ܾ� �Է� : ");

	scanf("%s", voca);



	for (i = 0; i <= MAX; i++)

		if (max <= voca[i])

			max = voca[i];



	printf("�ƽ�Ű�ڵ� ���� ���� ū ���ڴ� %c�Դϴ�.", max);

	return 0;

}*/
/*
#include <stdio.h>
int main(void)
{
	srand(time(NULL));
	int num;
	int dice;
	printf("�ֻ����� ������ Ƚ�� : ");
	scanf_s("%d", &num);
	int r, i = 0;
	while (i <= num)
	{
		i++;
	}
	for (dice = 1; dice <= 6; dice++)
	{
		r =rand() % num + 1;
		r++;
		printf("�� %d : %d\n", dice, r);
	}
	//r = rand() % num + 1;
	//r3 = rand() % num + 1;
	//r4 = rand() % num + 1;
	//r5 = rand() % num + 1;
	//r6 = rand() % num + 1;
	
	/*for (i = 1; i <= 6; i++)
	{
		printf("�� %d : %d\n", i, r);
	}

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i, r, j;
	printf("�ֻ����� ������ Ƚ�� : ");
	scanf_s("%d", &num);

	int dice[6] = { 0 }; //���� ������ ��! 0���� �ʱ�ȭ
	srand(time(NULL));
	//Ȯ���� �迭�� Ǫ�� �� ����.
	//������ �ϳ��� �������ָ� ���� ��� �ֻ��� ���� Ƚ���� 10���� �ϸ� 1���� 6���� ���� �����ϰ� 10 ������ ���� �����ȴ�.
	//�׷��� �� ������ 10�� 6���� ��� �����ϰ� �й��ؾ��ұ Ǯ��� �Ѵ�.
	//�׷��� �� 1���� 6���� �ֻ����� �� ���� �ۼ��ϴµ� ������ ���� 6���� �ʿ��ϱ⿡... dice[i]�̷������� �����ϴϱ� �迭�� ����..!
	for (i = 0; i < num; i++)
	{
		r = rand() % 6 + 1; //�̰� �ֻ��� ������ ����
		dice[r-1]++; //��� 1���� 6���� ���� ��� �� �㿡 �� ���� dice�� �־��ְ� �� �㿡 ���ǿ� *�� ����ϴ°Ŵ�.
	}
	for (i = 0; i < 6; i++)
	{
		printf("�� %d : ", i+1);//0���� ����������.. +1!
		for (j = 1; j <= dice[i]; j++)
		{
			printf("*"); //���� ���� ������ŭ *���� ����ϸ� ���� �ذ��̴�.
		}
		printf("\n");
	}
	return 0;
}*/

//���� 2���� �迭 ��� �� �� �ִ�~!!
/*
#include <stdio.h>
int main(void)
{
	int row, col;
	int matrix[100][100];
	int max = 0, min = 0;
	int i, j;

	printf("�迭�� ��� �� : ");
	scanf_s("%d %d", &row, &col);
	printf("��İ� : \n");

	for (i =0; i< row; i++) //�ϳ��� �˻��ϸ鼭
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			if (matrix[i][j] > max)
				max = matrix[i][j]; //�迭 ���ƴٴϸ鼭 �ִ� ã��
			if (matrix[i][j] < min)
					min = matrix[i][j];
		}
	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int row, col;
	int matrix[24][24] = {0, }; //6*4
	int sum = 0;
	int i, j;

	printf("�迭�� ��� �� : ");
	scanf_s("%d %d", &row, &col);
	printf("��İ� : \n");

	for (i = 0; i < row; i++) //�ϳ��� �˻��ϸ鼭
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			matrix[i][col] += matrix[i][j];
			matrix[row][j] += matrix[i][j];
			matrix[row][col] += matrix[i][j];
		}
	}
	printf("------------------------------------------\n");
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}

		return 0;
}