//가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여 구구단 중
//2단, 3단, 4단을 다음과 같이 지정하자

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	int arr[3][9];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
			arr[i][j] = (i + 2) * (j + 1); //2단부터 시작이니 2를 더해줌
	}
	//2차원 배열 for 문 중첩
	for (i = 0; i < 3; i++) //세로 3
	{
		for (j = 0; j < 9; j++) //가로 9
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
}

//열혈 C 11-2 문제3번
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100]; //voca 100자 이하
	int len = 0, i;
	char temp;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	while (voca[len] != '\0') //영단어의 길이를 계산하고 반 나눈 값을 대칭해서 뒤집음
		len++;

	for (i = 0; i < len / 2; i++) //영단어 뒤집기
	{
		temp = voca[i];
		voca[i] = voca[(len - i) - 1]; //뒤는 앞으로
		voca[(len - i) - 1] = temp; //앞은 뒤로
	}
	printf("뒤집힌 영단어 : %s \n", voca);
	return 0;
}*/