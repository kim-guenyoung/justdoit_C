/*#include <stdio.h>
int main(void)
{
	printf("문자형 변수크기(바이트): char - %d\n", sizeof(char));
	printf("정수형 변수크기(바이트): short - %d\t", sizeof(short));
	printf("int - %d \t", sizeof(int));
	printf("long - %d\t\n", );
	printf("실수형 변수크기(바이트): float - %d\t", sizeof(float));
	printf("double - %d\t", sizeof(float));
	printf("long double - %d", sizeof(double));
}*/

//분을 입력하면 바꾸는~
/*#include <stdio.h>
int main(void)
{
	int min;
	int hour, day;
	printf("분(min)을 입력하세요 : ");
	scanf_s("%d", &min);

	day = min / 60 / 24;
	hour = min / 60 % 24 % 60;
	min = min % 60;
	
	printf("%d일 %d시간 %d분", day, hour, min);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	printf("첫 번째 정수 : ");
	scanf_s("%d", &num1);
	printf("두 번째 정수 : ");
	scanf_s("%d", &num2);

	if (num1 * num2 < 0)
		printf("\n서로 부호가 다르다.\n");
	if (num1 > num2)
		printf("두 값의 차는 %d이다.", num1 - num2);
	else
		printf("두 값의 차는 %d이다.", num2 - num1);
}*/
/*
#include <stdio.h>

int main(void)
{
	int num;
	int flag = 0;
	printf("정수 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("(2의 배수)");
		flag++;
		if (flag == 1)
			printf("-");
	
	if (num % 3 == 0)
		printf("(3의 배수)");
		flag++;
		if (flag == 2)
			printf("-");
	
	if (num % 5 == 0)
		printf("(5의 배수)");
		if (flag == 3)
			printf("-");
	
	if (num % 7 == 0)
		printf("(7의 배수)");
		if (flag == 4)
			printf("-");
	
	if (num % 9 == 0)
		printf("(9의 배수)");
		if (flag == 5)
			printf("-");

}*/


/*#include <stdio.h>
int main(void)
{
	double weight, height;
	double sumw = 0, sumh = 0; //합산 목적이니까 0으로 초기화
	int cnt = 0;
	double avrw = 0, avrh = 0;
	printf("아래에 몸무게(kg)와 키(cm)를 입력하세요.\n");


	while (1)
	{
		cnt++; //받은 개수만큼!
		
		scanf_s("%lf %lf", &weight, &height);
		sumw += weight;
		sumh += height;
		
		if (height < 0 || weight < 0) //음수 받으면 탈출!
			break;

	}
	avrw = sumw / (cnt - 1);
	avrh = sumh / (cnt - 1);
	printf("평균 몸무게(kg) : %.2lf ", avrw); 
	printf("평균 키(cm) : %.2lf", avrh);
	return 0;
}*/


/*
//완전 중요 반드시 알아두세요!!!!
#include <stdio.h>
int main(void)
{
	int num, i;
	int cnt= 0; //약수 개수
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if ((num % i) == 0)
			cnt++;
	}
		if (cnt == 2) //만약 약수의 개수가 2개면 소수입니다!
			printf("소수입니다.");
		
		else
			printf("소수가 아닙니다,");
		
		return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int line;
	int i, j;
	printf("줄(line) 수 : ");
	scanf_s("%d", &line);
	
	for (i = 1; i <= line; i++) //i는 줄 개수까지만 증가
	{
		for (j = 1; j <= line - i; j++) //공백 개수 + * = 마지막 별 개수
		//line과 index 번호 동일
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i-1 ; j++) //별 개수 3번째 줄은 3*2-1개라는 뜻
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int m, n;
int SignInt(int m, int n)
{
	if (m > n)
		return m - n;
	else
		return n - m;
}
int main(void)
{
	printf("첫 번째 정수 : ");
	scanf_s("%d", &m);
	printf("두 번째 정수 : ");
	scanf_s("%d", &n);
	{
		if (m * n > 0)
			printf("부호가 같다.");
		else
			printf("서로 부호가 다르다.\n");
	}
	printf("두 값의 차는 %d이다.", SignInt(-35, 52));
}*/
/*
#include <stdio.h>
int is_prime(int num)
int main(void)
{
	int num, i;
	int cnt;
	if ((num % i) == 0)
}
int is_prime(int num)
{
	if(num % i == 0)
}
printf("숫자를 입력하세요 : ");
scanf_s("%d", &num);

for (i = 1; i <= num; i++)
{
	if ((num % i) == 0)
		cnt++;
}
if (cnt == 2) //만약 약수의 개수가 2개면 소수입니다!
printf("소수입니다.");

else
printf("소수가 아닙니다,");

return 0;
*/

/*#include <stdio.h>
#define MAX 30
int arr1[][];

int main(void)
{
	int matrix[][];
	int row, col;
	printf("배열의 행과 열 : ");
	scanf_s("%d %d", &row, &col);
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
		{
			scanf_s("%d", &matrix[i][j]);
			matrix[i][col] += matrix[i][j];
			matrix[row][j] += matrix[i][j];
			matrix[row][col] += matrix[i][j];
		}
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j <= col; j++)
			printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int num, seed, answer, cnt= 1, i;
	seed = time(NULL);
	srand(seed);
	num = rand() % 100;

	printf("1부터 200 사이의 수를 입력하세요 : ");	
	scanf_s("%d", &i);
	while (1)
	{
		if (i > num)
		{
			cnt++;
			printf("더 작습니다.\n");
		}
		if(i < num)
		{
			cnt++;
			printf("더 큽니다.\n");
		}
		if (i == num)
			break;
		scanf_s("%d", &i);
		printf("맞았습니다. %d번 만에 맞추었습니다.", cnt);
			break;	
	}
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int x, y;
	int z;
	printf("한 번에 몇 단씩 출력할까요? : ");
	scanf_s("%d", &z);
	
	for (y = 1; y <= 9; y++)
	{
		for (x = 2; x <= 9; x++)
		{
			printf("%d * %d = %d\t", x, y, x * y);
		}
		printf("\n");
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int num;
	int i;
	printf("주사위를 던지는 횟수 : ");
	scanf_s("%d", &num);
	int cnt[6] = { 0, 0, 0, 0, 0, 0 }; //배열 0으로 다 초기화
	for (i = 0; i < num; i++)
	{
		int r = rand() % 6++; //1부터 6사이의 난수 생성
		cnt[r-1]++; //
	}
	for (i = 0; i < 6; i++)
	{
		printf("눈 %d : ", i + 1);
		for (int j = 0; j < cnt[i]; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}