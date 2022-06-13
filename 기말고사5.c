/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)

	{
		*ptr += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4];
	int total = 0;
	int i;
	for (i = 0; i < 5; i++)

	{
		ptr--;
		total += arr[i];
	}
	printf("%d", total);
}*/
/*#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int odd(int *arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
			printf(arr[i]);
	}
}
int even(int *arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
			printf(arr[i]);
	}
}
int main(void)
{
	int i;
	int arr[10];
	printf("총 10개의 숫자 입력 : \n");
	for (i = 0; i < 10; i++)
	{
		printf("입력 : ");
		scanf("%d", &arr[i]);

	}
	printf("홀수 입력 : ", arr[i]);
	printf("짝수 입력 : ", arr[i]);
	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	int rides[5] = { 5, 10, 23, 15, 48 };
	int time[5] = { 2, 2, 3, 2, 1 };
	int sum[5] = { 0, };
	int i, j, temp;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (sum[j] > sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
		}
		sum[i] = rides[i] + time[i];
		printf("%d ", sum[j]);
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[10] = { 10, 14, 3, 1, 9, 2, 6, 13, 7, 11 };
	int temp, i, j;
	int* ptr = arr;

	printf("정렬 전 : ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n정렬 후 : ");

	//버블 정렬 이용
	for (i = 0; i < 10; i++)
		for (j = 0; j < 9; j++) //예를 들어 3개의 수가 있다하자 비교 총 2번 해주는 것처럼 얘도 9번
		{
			if (arr[j] > arr[j + 1]) //다음 리스트 값이랑 계속 비교해주면서 큰 값을 다음으로 넘김
				//for문 써서 뒤로 계속 밀려나게
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	for(j = 0; j<10; j++)
		printf("%d ", arr[j]);
}*/
/*
#include <stdio.h>
int main(void)
{
	int a = 5, b = 10, c = 23, d = 15, e = 48;
	int rides[5] = { a, b, c, d, e };
	int time[5] = { 2, 2, 3, 2, 1 };
	int sum[5] = { 0, };
	int i, j, temp;
	for (i = 0; i < 5; i++)
	{
		sum[i] = rides[i] + time[i];
		//sum을 배열해주고 *rides 값으로 받으면 될 것 같은데
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (sum[i] > sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
		}
		if (sum[i] == 7)
			printf("a ");
		if (sum[i] == 12)
			printf("b ");
		if (sum[i] == 26)
			printf("c ");
		if (sum[i] == 17)
			printf("d ");
		if (sum[i] == 49)
			printf("e ");
	}
	return 0;
}*/
