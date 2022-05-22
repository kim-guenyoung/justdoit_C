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
	printf("배열 요소에 저장된 값의 합 : %d\n", sum);
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

	printf("배열 arr1의 크기 : %d\n", sizeof(arr1));  //20
	printf("배열 arr2의 크기 : %d\n", sizeof(arr2)); //28
	printf("배열 arr3의 크기 : %d\n", sizeof(arr3)); //20


	//int형은 4바이트니까 나눠주는 거지
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
	// 모든 값을 프린트 해주세요~
	// 포인터 연산을 이용해서 모든 요소에 접근하는 방법입니다
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", array[i]);
	}
}

void resetArray(int(*array)[3])
{
	// 모든 값을 0으로 바꿔주세요~
	// 배열 포인터와 배열의 시작 주소로 모든 요소에 접근하는 방법입니다, call_by_reference
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n", *(array[0] + i) * 0); //이게 포인터 연산 array0번째 부분 배열을 가리킴
	}
	return;
}

int(*resetArray2(int array[][3]))
{
	for (int i = 0; i < 2; i++) //세로는 i, 세로의 크기인 2만큼 반복하겠다.

		for (int j = 0; j < 3; j++) //가로는 J, 가로의 크기인 3만큼 반복하겠다.
		{
			printf("%d\n", array[i][j] * 0 + 1); //1걸음 갈건데
		}
	return array;

}
int main(void)
{
	int arr[2][3] = //세로 크기는 2, 가로 크기 3이고 자료형은 int인 2차원 배열 
	{
		{ 10, 20 , 30 }, { 40, 50, 60 }
		//10 20 30
		//40 50 60 이 원래는 출력
	};

	printArray(arr); //printArray 함수 ㄱ ㄱ
	resetArray(arr); //resetArray 함수 ㄱ ㄱ

	int(*arr2)[3];
	arr2 = resetArray2(arr); //라스트팡 
	printArray(arr);

	return 0;
}