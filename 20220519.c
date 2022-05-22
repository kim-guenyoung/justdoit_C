/*
#include <stdio.h>
int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i <= 4; i++)
	{
		sum += arr[i];
	}
	printf("�迭 ��ҿ� ����� ���� �� : %d\n", sum);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 }; 
	int arr2[] = { 1, 2, 3 ,4, 5, 6, 7 }; 
	int arr3[5] = { 1, 2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d\n", sizeof(arr1));  //20
	printf("�迭 arr2�� ũ�� : %d\n", sizeof(arr2)); //28
	printf("�迭 arr3�� ũ�� : %d\n", sizeof(arr3)); //20


	//int���� 4����Ʈ�ϱ� �����ִ� ����
	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n"); //1 2 3 4 5

	for (i = 0; i < ar2Len; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n"); //1 2 3 4 5 6 7

	for (i = 0; i < ar3Len; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n"); //1 2 0 0 0

	return 0;
}*/


#include <stdio.h>

void printArray(int* array)
{
	// ��� ���� ����Ʈ ���ּ���~
	// ������ ������ �̿��ؼ� ��� ��ҿ� �����ϴ� ����Դϴ�
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", array[i]);
	}
}

void resetArray(int(*array)[3])
{
	// ��� ���� 0���� �ٲ��ּ���~
	// �迭 �����Ϳ� �迭�� ���� �ּҷ� ��� ��ҿ� �����ϴ� ����Դϴ�, call_by_reference
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", *(array[0] + i) * 0); //�̰� ������ ���� array0��° �κ� �迭�� ����Ŵ
	}
	return;
}

int(*resetArray2(int array[][3]))
{
	for (int i = 0; i < 2; i++) //���δ� i, ������ ũ���� 2��ŭ �ݺ��ϰڴ�.

		for (int j = 0; j < 3; j++) //���δ� J, ������ ũ���� 3��ŭ �ݺ��ϰڴ�.
		{
			printf("%d\n", array[i][j] * 0 + 1); //1���� ���ǵ�
		}
	return array;

}
int main(void)
{
	int arr[2][3] = //���� ũ��� 2, ���� ũ�� 3�̰� �ڷ����� int�� 2���� �迭 
	{
		{ 10, 20 , 30 }, { 40, 50, 60 }
		//10 20 30
		//40 50 60 �� ������ ���
	};

	printArray(arr); //printArray �Լ� �� ��
	resetArray(arr); //resetArray �Լ� �� ��

	int(*arr2)[3];
	arr2 = resetArray2(arr); //��Ʈ�� 
	printArray(arr);

	return 0;
}