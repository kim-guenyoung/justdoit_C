//���� 2562 �ִ�
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int max = 0, arr[9], pose = 0; //max = �ִ�, pose= ���° ��ġ�� �ִ���

	for (int i = 0; i < 9; i++) //��������, i�� 9���� ���� ��������, ���� Ű��鼭
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max) //�ԷµǴ� ���ڰ� �ִ񰪺��� ũ�� �ִ� ����
			max = arr[i], pose = i + 1; //0��°, 1��°...�̷������� ���ϱ� +1 ���ؼ� 1��°���� �����ϰ� ��

		printf("%d %d\n", max, pose); 
	}
		return 0;
}*/

//���� 2675 ���ڿ� �ݺ�
/*
���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� P�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ P�� ����� �ȴ�.
S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: �̴�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int T, R; //T = test ���̽� ����, R = repeat�� ��
	int i, j, k; //i ó�� j �� ��° �Է���, k �� ��° �Է���
	char S[20], P[1000];  //�Է� ���� ���ڿ��� ����� ���ڿ� (20���� ���� �ʰ� 1000�� ����)
	scanf("%d", &T);
	for (i = 0; i < T; i++) //�׽�Ʈ ����ŭ �ݺ�
	{
		scanf("%d %s", &R, &S);  //�ݺ� Ƚ��, ���ڿ� �Է�
		for (j = 0; j < 20; j++)
		{
			for (k = 0; k < R; k++)
			{
				P[j * R + k] = S[j];  // j��° ���ڸ� R�� �ݺ��ؼ� P�� ������ ����
			}
		}
		printf("%s\n", P);
	}
}


// ����C 16-1 ���� 2��
/*#include <stdio.h>
int main(void)
{
	int i, j;
	int arrA[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	}; //int A = 1 2 3 4
			//	5 6 7 8
	int arrB[4][2];
	// arrA�� �࿭�� �ٲ� ���� arrB�� �����ϰ���
		//1 5
		//2 6
		//3 7
		//4 8
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];
	//2���� �迭�̴ϱ� for�� ��ø
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}
	return 0;
}*/
//�ڵ�� 1460
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main (void)
{
	int i, j, num;
	int arr[100][100]; //1���� 100����

	scanf("%d", &num);

	for (i = 0; i < num; i++) //�� �ϳ��� ����
	{
		for (j = 1; j <= num; j++) { //�� �ϳ��� ����

			arr[i][j] = i * num + j; //������ ������ �� ��(���� �ڸ� ���� ������ߵ�)

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/