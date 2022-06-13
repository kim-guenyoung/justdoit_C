/*#include <stdio.h>
int main(void)
{
	int numArr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	printf("%d\n", sizeof(numArr)); //자료 개수 x int형 바이트
	printf("%d\n", sizeof(numArr) / sizeof(int));
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
	int i;
	for (i = 9; i >= 0; i--)
		printf("%d ", numArr[i]);
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 100;
	int binary[10] = { 0, };
	int position = 0;
	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = position - 1; i >= 0; i--)
		printf("%d ", binary[i]);
	printf("\n");
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[5];
	int SmallestNumber;

	scanf_s("%d %d %d %d %d", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);
	SmallestNumber = numArr[0];
	int i;
	
	for (i = 0; i < 5; i++)
	{
		if (numArr[i] < SmallestNumber)
		{
			SmallestNumber = numArr[i];
			break;
		}
		numArr[i];
	}
	printf("%d\n", SmallestNumber);
}*/

#include <stdio.h>
int main(void)
{
	int cnt = 0;
	while (cnt <= 10)
	{
		printf("%d ", cnt);
		cnt++;
	}
	printf("%d ", cnt);
	printf("\n\n");

	int x[6], i;
	int* p;
	p = x;
	for (i = 0; i <= 5; i++)
	{
		x[i] = i * i + 1;
		printf("%d %d %d %d %d\n", p[i], *(p + i), *p + i, x[i], *(x + i));
	}

}