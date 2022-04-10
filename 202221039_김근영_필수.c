//백준 2562 최댓값
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int max = 0, arr[9], pose = 0; //max = 최댓값, pose= 몇번째 위치에 있는지

	for (int i = 0; i < 9; i++) //변수선언, i가 9보다 작을 때까지만, 숫자 키우면서
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max) //입력되는 숫자가 최댓값보다 크면 최댓값 갱신
			max = arr[i], pose = i + 1; //0번째, 1번째...이런식으로 가니까 +1 더해서 1번째부터 시작하게 함

		printf("%d %d\n", max, pose); 
	}
		return 0;
}*/

//백준 2675 문자열 반복
/*
문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.
즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다.
S에는 QR Code "alphanumeric" 문자만 들어있다.
QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int T, R; //T = test 케이스 개수, R = repeat할 수
	int i, j, k; //i 처음 j 두 번째 입력할, k 세 번째 입력할
	char S[20], P[1000];  //입력 받을 문자열과 출력할 문자열 (20글자 넘지 않고 1000개 이하)
	scanf("%d", &T);
	for (i = 0; i < T; i++) //테스트 수만큼 반복
	{
		scanf("%d %s", &R, &S);  //반복 횟수, 문자열 입력
		for (j = 0; j < 20; j++)
		{
			for (k = 0; k < R; k++)
			{
				P[j * R + k] = S[j];  // j번째 문자를 R번 반복해서 P에 저장할 것임
			}
		}
		printf("%s\n", P);
	}
}


// 열혈C 16-1 문제 2번
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
	// arrA의 행열을 바꾼 것을 arrB로 정의하겠음
		//1 5
		//2 6
		//3 7
		//4 8
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			arrB[j][i] = arrA[i][j];
	//2차원 배열이니까 for문 중첩
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
			printf("%d ", arrB[i][j]);
		printf("\n");
	}
	return 0;
}*/
//코드업 1460
/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main (void)
{
	int i, j, num;
	int arr[100][100]; //1부터 100이하

	scanf("%d", &num);

	for (i = 0; i < num; i++) //행 하나씩 증가
	{
		for (j = 1; j <= num; j++) { //열 하나씩 증가

			arr[i][j] = i * num + j; //곱해준 다음에 열 값(일의 자리 숫자 더해줘야됨)

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/