#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[24] = { 0 };

	int num = 0;
	int num2 = 0;
	int i = 0;
	scanf("%d", &num); //�θ� Ƚ��
	
	for (i = 1; i <= num; i++)
	{
		scanf("%d", &num2);
		arr[num2] += 1; //�θ� Ƚ�� ī����
	}
	for (i = 1; i <= 24; i++) {
		printf("%d\n", arr[i]);
	}
		return 0;
}