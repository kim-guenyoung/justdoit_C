//������ ���̰� 9, ������ ���̰� 3�� int�� 2���� �迭�� �����Ͽ� ������ ��
//2��, 3��, 4���� ������ ���� ��������

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int arr[3][9];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1); //2�ܺ��� �����̴� 2�� ������
	}
	//2���� �迭 for �� ��ø
	for (i = 0; i < 3; i++) //���� 3
	{
		for (j = 0; j < 9; j++) //���� 9
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}*/

#include <stdio.h>
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
}

//���� C 11-2 ����3��
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100]; //voca 100�� ����
	int len = 0, i;
	char temp;

	printf("���ܾ� �Է� : ");
	scanf("%s", voca);

	while (voca[len] != '\0') //���ܾ��� ���̸� ����ϰ� �� ���� ���� ��Ī�ؼ� ������
		len++;

	for (i = 0; i < len / 2; i++) //���ܾ� ������
	{
		temp = voca[i];
		voca[i] = voca[(len - i) - 1]; //�ڴ� ������
		voca[(len - i) - 1] = temp; //���� �ڷ�
	}
	printf("������ ���ܾ� : %s \n", voca);
	return 0;
}*/