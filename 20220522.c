/*#include <stdio.h>
int arr[] = { 4, 1, 2, 5, 7, 3, 6, 8 };
int num;
int i;

int find(int arr[], int n)
{
	int i;

	for (i = 0; i <= 7; i++)
	{
		if (n == arr[i])
			return i + 1; //i 값은 인덱스 값이니까 +1을 해주어야됨. 0부터 시작이니까
	}
}
int main(void)
{
	while (1)
	{
		printf("1부터 8까지의 수를 입력하세요(0 누르면 종료) : ");
		scanf_s("%d", &num);
		if (num > 8)
		{
			printf("%d은(는) 존재하지 않습니다.\n", num);
			continue;
		}
		if (num == 0)
		{
			printf("프로그램을 종료합니다.");
			break;
		}
			printf("%d은(는) %d 번째에 있습니다.\n", num, find(arr, num));

	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000
int main(void)
{
	char voca[MAX];
	int i;
	int max = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	for (i = 0; i <= MAX; i++)
		if (max <= voca[i])
			max = voca[i];

	printf("아스키코드 값이 가장 큰 문자의 값은 %d입니다.", max);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

int main(void)

{

	char voca[MAX];

	int i;

	int max = 0;



	printf("영단어 입력 : ");

	scanf("%s", voca);



	for (i = 0; i <= MAX; i++)

		if (max <= voca[i])

			max = voca[i];



	printf("아스키코드 값이 가장 큰 문자는 %c입니다.", max);

	return 0;

}*/
/*
#include <stdio.h>
int main(void)
{
	srand(time(NULL));
	int num;
	int dice;
	printf("주사위를 던지는 횟수 : ");
	scanf_s("%d", &num);
	int r, i = 0;
	while (i <= num)
	{
		i++;
	}
	for (dice = 1; dice <= 6; dice++)
	{
		r =rand() % num + 1;
		r++;
		printf("눈 %d : %d\n", dice, r);
	}
	//r = rand() % num + 1;
	//r3 = rand() % num + 1;
	//r4 = rand() % num + 1;
	//r5 = rand() % num + 1;
	//r6 = rand() % num + 1;
	
	/*for (i = 1; i <= 6; i++)
	{
		printf("눈 %d : %d\n", i, r);
	}

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num;
	int i, r, j;
	printf("주사위를 던지는 횟수 : ");
	scanf_s("%d", &num);

	int dice[6] = { 0 }; //아직 굴리기 전! 0으로 초기화
	srand(time(NULL));
	//확실히 배열로 푸는 게 쉽다.
	//변수를 하나만 지정해주면 예를 들어 주사위 굴린 횟수를 10으로 하면 1부터 6까지 각각 랜덤하게 10 이하의 수가 배정된다.
	//그런데 이 문제는 10을 6개에 어떻게 랜덤하게 분배해야할까를 풀어야 한다.
	//그래서 눈 1부터 6까지 주사위의 눈 수만 작성하는데 변수가 무려 6개나 필요하기에... dice[i]이런식으로 접근하니까 배열이 좋다..!
	for (i = 0; i < num; i++)
	{
		r = rand() % 6 + 1; //이건 주사위 굴리는 과정
		dice[r-1]++; //긍까 1부터 6까지 랜덤 출력 한 담에 그 값을 dice에 넣어주고 그 담에 막판에 *로 출력하는거다.
	}
	for (i = 0; i < 6; i++)
	{
		printf("눈 %d : ", i+1);//0부터 시작했으니.. +1!
		for (j = 1; j <= dice[i]; j++)
		{
			printf("*"); //위에 나온 개수만큼 *값을 출력하면 문제 해결이다.
		}
		printf("\n");
	}
	return 0;
}*/

//자자 2차원 배열 고고링 할 수 있다~!!
/*
#include <stdio.h>
int main(void)
{
	int row, col;
	int matrix[100][100];
	int max = 0, min = 0;
	int i, j;

	printf("배열의 행과 열 : ");
	scanf_s("%d %d", &row, &col);
	printf("행렬값 : \n");

	for (i =0; i< row; i++) //하나씩 검사하면서
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			if (matrix[i][j] > max)
				max = matrix[i][j]; //배열 돌아다니면서 최댓값 찾고
			if (matrix[i][j] < min)
					min = matrix[i][j];
		}
	printf("최댓값 : %d\n", max);
	printf("최솟값 : %d\n", min);
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int row, col;
	int matrix[24][24] = {0, }; //6*4
	int sum = 0;
	int i, j;

	printf("배열의 행과 열 : ");
	scanf_s("%d %d", &row, &col);
	printf("행렬값 : \n");

	for (i = 0; i < row; i++) //하나씩 검사하면서
	{
		for (j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			matrix[i][col] += matrix[i][j];
			matrix[row][j] += matrix[i][j];
			matrix[row][col] += matrix[i][j];
		}
	}
	printf("------------------------------------------\n");
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j <= col; j++)
		{
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}

		return 0;
}