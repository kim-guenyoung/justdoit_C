/*#include <stdio.h>
int main(void)
{
	int num1 = 10;

	printf("%p\n", &num1); //0000002C52FCF884라는 num1의 메모리 주소를 출력함

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int* numPtr; //포인터 변수 선언
	int num1 = 10;

	numPtr = &num1;

	printf("%p\n", numPtr); //둘 다 num1의 주소를 의미하니까 같은 주소 값이 출력 될 것임!

	printf("%p\n", &num1); //고로 포인터 = 메모리 주소 값이랑 등가

	return 0;
}*/
/*
#include <stdio.h>


int main(void)
{
	int row, col;
	int arr[30][30] = { 0, };
	int i, j;

	printf("배열의 행과 열 : "); //row = 행 col = 열
	scanf_s("%d %d", &row, &col);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			scanf_s("%d", &arr[i][j]);

	}
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num;
	int i = 1;
	int dice;

	printf("주사위를 던지는 횟수 : ");
	scanf_s("%d", &num);
	srand(time(NULL)); //현재 시간을 기준으로 초기화 그래야 난수가 만들어짐

	while (i <= num)
	{
		i++;
	}
	for (dice = 1; dice <= 6; dice++)
	{
		int cnt = 1;
		cnt += rand() % num + 1;

		printf("눈 %d : %d\n", dice, rand() % num + 1);
		//rand() % n 이거는 0부터 n-1까지고
		//(rand() % n) + 1은 1부터 n까지긴 한데 한 번도 안 나올 수도 있으니까 위에꺼 사용
	}
	return 0;
}*/



