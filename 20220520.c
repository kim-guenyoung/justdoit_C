#include <stdio.h>

void printArray(int* array)
{
	// 모든 값을 프린트 해주세요~
	// 포인터 연산을 이용해서 모든 요소에 접근하는 방법입니다
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", array[i]); //그냥 배열 출력이니 10 20 30 40 50 60 출력될 것임
	}
	printf("\n");
}

void resetArray(int(*array)[3])
{
	// 모든 값을 0으로 바꿔주세요~
	// 배열 포인터와 배열의 시작 주소로 모든 요소에 접근하는 방법입니다, call_by_reference
	for (int i = 0; i < 6; i++)
	{
 		printf("%d ", *(array[0] + i) * 0); //이게 포인터 연산 array0번째 부분 배열을 가리키고 i만큼 움직이면서 0을 곱해서 싹 다 초기화
	}
	printf("\n");
	return;
}

int(*resetArray2(int array[][3]))

 // 모든 값을 1로 바꿔주세요~
 // 배열 포인터를 이용해 리턴하는 방법입니다!
 // 매개변수로 들어오는 array 변수(배열 포인터)를 이용해주세요~, call_by_value
 // https://boongubbang.tistory.com/269

{
	for (int i = 0; i < 2; i++) //세로는 i, 세로의 크기인 2만큼 반복하겠다.

		for (int j = 0; j < 3; j++) //가로는 j, 가로의 크기인 3만큼 반복하겠다.
		{
			printf("%d ", array[i][j] * 0 + 1); //0으로 초기화한 값에서 1걸음 가서 1로 바꾸어주기
		}
	printf("\n");
	return array;
}
int main(void)
{
	int arr[2][3] = //세로 크기는 2, 가로 크기 3이고 자료형은 int인 2차원 배열 
	{
		{ 10, 20 , 30 }, { 40, 50, 60 }
		//10 20 30
		//40 50 60 할당
	};

	printArray(arr); //printArray 함수 ㄱ ㄱ
	resetArray(arr); //resetArray 함수 ㄱ ㄱ

	int(*arr2)[3]; // 앞서 사용한 int arr[2][3]과 배열의 이름과 자료형이 같은 포인터 변수를 선언!
	arr2 = resetArray2(arr); //음 그러면 아까 +1걸음 했으니까
	printArray(arr2); //이게 printArray(arr)값과 왜 같냐면 0으로 초기화 해줬는데 다시 앞을 출력하니까 똑같이 위와 같이 출력

	return 0;
}

//10진수 정수를 입력받아 16진수로 출력하는 프로그램 작성
/*
#include <stdio.h>
int main(void)
{
	int num;
	
	printf("10진수 정수를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%x", num);
}*/
/*
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int x, y;
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 <= num2)
	{
		num1 = num2;
	}
		
			for (x = 2; x <= 9; x++)
				for (y = 1; y <= 9; y++)
				{
					if (y == 1)
						printf("%d단\n", x);
					printf("%d x %d = %d\n", x, y, x * y);
				}
}*/

//최대공약수
/*
#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i;
	int GCD;

	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	for (i = 2; i <= num1 && i <= num2; i++)
		if (num1 % i == 0 && num2 % i == 0)
			GCD = i;

	printf("두 수의 최대공약수 : %d", GCD);

	return 0;
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

	while(i <=  num)
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
/*
#include <stdio.h>

int max(big)
{

	return big;
}*/
/*
int main(void)
{
	int arr[3][4] =
	{
	{ 5, 35, -64, 38 }, {34, 78, 21, -79}, {5, 35, -64, 38}
	};
	printf(arr[3][4]);
}
*/