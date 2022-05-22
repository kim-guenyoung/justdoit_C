#include <stdio.h>

void printArray(int* array)
{
	// ��� ���� ����Ʈ ���ּ���~
	// ������ ������ �̿��ؼ� ��� ��ҿ� �����ϴ� ����Դϴ�
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", array[i]); //�׳� �迭 ����̴� 10 20 30 40 50 60 ��µ� ����
	}
	printf("\n");
}

void resetArray(int(*array)[3])
{
	// ��� ���� 0���� �ٲ��ּ���~
	// �迭 �����Ϳ� �迭�� ���� �ּҷ� ��� ��ҿ� �����ϴ� ����Դϴ�, call_by_reference
	for (int i = 0; i < 6; i++)
	{
 		printf("%d ", *(array[0] + i) * 0); //�̰� ������ ���� array0��° �κ� �迭�� ����Ű�� i��ŭ �����̸鼭 0�� ���ؼ� �� �� �ʱ�ȭ
	}
	printf("\n");
	return;
}

int(*resetArray2(int array[][3]))

 // ��� ���� 1�� �ٲ��ּ���~
 // �迭 �����͸� �̿��� �����ϴ� ����Դϴ�!
 // �Ű������� ������ array ����(�迭 ������)�� �̿����ּ���~, call_by_value
 // https://boongubbang.tistory.com/269

{
	for (int i = 0; i < 2; i++) //���δ� i, ������ ũ���� 2��ŭ �ݺ��ϰڴ�.

		for (int j = 0; j < 3; j++) //���δ� j, ������ ũ���� 3��ŭ �ݺ��ϰڴ�.
		{
			printf("%d ", array[i][j] * 0 + 1); //0���� �ʱ�ȭ�� ������ 1���� ���� 1�� �ٲپ��ֱ�
		}
	printf("\n");
	return array;
}
int main(void)
{
	int arr[2][3] = //���� ũ��� 2, ���� ũ�� 3�̰� �ڷ����� int�� 2���� �迭 
	{
		{ 10, 20 , 30 }, { 40, 50, 60 }
		//10 20 30
		//40 50 60 �Ҵ�
	};

	printArray(arr); //printArray �Լ� �� ��
	resetArray(arr); //resetArray �Լ� �� ��

	int(*arr2)[3]; // �ռ� ����� int arr[2][3]�� �迭�� �̸��� �ڷ����� ���� ������ ������ ����!
	arr2 = resetArray2(arr); //�� �׷��� �Ʊ� +1���� �����ϱ�
	printArray(arr2); //�̰� printArray(arr)���� �� ���ĸ� 0���� �ʱ�ȭ ����µ� �ٽ� ���� ����ϴϱ� �Ȱ��� ���� ���� ���

	return 0;
}

//10���� ������ �Է¹޾� 16������ ����ϴ� ���α׷� �ۼ�
/*
#include <stdio.h>
int main(void)
{
	int num;
	
	printf("10���� ������ �Է��ϼ��� : ");
	scanf_s("%d", &num);

	printf("%x", num);
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int x, y;
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 <= num2)
	{
		num1 = num2;
	}
		
			for (x = 2; x <= 9; x++)
				for (y = 1; y <= 9; y++)
				{
					if (y == 1)
						printf("%d��\n", x);
					printf("%d x %d = %d\n", x, y, x * y);
				}
}*/

//�ִ�����
/*
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i;
	int GCD;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	for (i = 2; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			GCD = i;

	printf("�� ���� �ִ����� : %d", GCD);

	return 0;
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

	while(i <=  num)
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
/*
#include <stdio.h>

int max(big)
{

	return big;
}*/
/*
int main(void)
{
	int arr[3][4] =
	{
	{ 5, 35, -64, 38 }, {34, 78, 21, -79}, {5, 35, -64, 38}
	};
	printf(arr[3][4]);
}
*/