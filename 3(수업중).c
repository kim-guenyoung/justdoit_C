#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[24] = { 0 };

	int num = 0;
	int num2 = 0;
	int i = 0;
	scanf("%d", &num); //부를 횟수
	
	for (i = 1; i <= num; i++)
	{
		scanf("%d", &num2);
		arr[num2] += 1; //부른 횟수 카운팅
	}
	for (i = 1; i <= 24; i++) {
		printf("%d\n", arr[i]);
	}
		return 0;
}