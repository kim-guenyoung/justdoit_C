/*#include <stdio.h>
int main(void)
{
	//int oneDimArr[4]; //int�� ���� 4���� �̷���� �迭�� �����ϵ�, �� �迭�� �̸��� oneDimArr�� �Ͽ���.
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("�迭 ��ҿ� ����� ���� �� : %d\n", sum);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int arr3[5] = {1, 2};
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ�� : %d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ�� : %d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ�� : %d\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); //�迭 arr1�� ���̸� �Ի�
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr2) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");

	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int arr[5];

	printf("���� 5���� �Է��ϼ��� : ");
	scanf_s("%d %d %d %d %d", &arr[1], &arr[2], &arr[3], &arr[4], &arr[5])
}

for (i = 1; i < 5; i++)
{
	if (max < arr[i])
		max = arr[i];
}