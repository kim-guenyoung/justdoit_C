//1번
/*#include<stdio.h>
int main(void)

{
	int num = 0;

	int cnt = 1;

	scanf_s("%d", &num);

	while (cnt <= num) { //입력한 값보다 작거나 같을 때까지만 출력
		printf("%d\n", cnt);
		cnt++;

	}
	return 0;
}*/

//2번
/*#include <stdio.h>
int main(void)
{
	int num = 1, cnt = 1, sum = 0;
	scanf("%d", &num);
	while (cnt <= num)
	{
		printf("%d\n", cnt);

		sum += cnt;//입력된 숫자까지만 추가로 더하기
		cnt++;
	}

	printf("sum = %d", sum);
	return 0;
}*/

//3번
/*#include <stdio.h>

int main(void)
{

	int num = 0, cnt = 0;

	printf("정수 입력 : ");

	scanf("%d", &num);

	while (cnt < num) //출력한 정수개수 만큼 출력 

	{

		printf("Hello world \n", num);

		cnt++;
	}

	return 0;
}*/

//4번
/*#include <stdio.h>
int main(void)

{

	int num = 0, cnt = 1; //1 이상의 수부터 나오니 cnt = 1
	printf("정수 입력 : ");

	scanf_s("%d", &num);
	while (cnt <= num) //입력받은 수가 크거나 같아질 때까지
	{
		printf("%d\n", cnt * 3); //3의 배수이니 x3
		cnt++;
	}
	return 0;
}*/

//5번
/*#include <stdio.h>

int main(void)

{
	int num = 1, sum = 0;
	while (num != 0) //0이 될 때까지 계속 더함
	{
		sum = sum + num;

		printf("정수 입력 : ");
		scanf_s("%d", &num);

		if (num == 0) //0입력되는 순간 루프 종료

		{
			printf("합 : %d", sum);
			break;
		}
	}
	return 0;
}*/
//6번
/*#include <stdio.h>

int main(void)
{
	int x = 0, y = 1;

	scanf_s("%d", &x);
	printf("%d단을 입력합니다.\n", x);

	while (y <= 9)
	{
		printf("%d x %d = %d\n", x, y, x * y); //구구단이니까 9까지만 받을거고
		y++; //9이하일 경우 계속 커지게
	}

	return 0;
}*/
//8번
/*#include <stdio.h>

int main(void)
{
	int x, y = 0, z; //y= 0, z, sum = 0; //입력할 정수의 개수 : x, y : 입력하는 정수, z : 계속 더해지는
	float sum = 0; //소수점 출력해야돼서

	printf("입력할 정수의 개수 : ");
	scanf_s("%d", &x);



	while (x > y) //입력한 정수까지만 입력
	{
		y++;

		printf("%d번째 정수를 입력합니다.", y);
		scanf_s("%d", &z);

		sum += z; //평균을 구해주기 위해서 더함
	}
	printf("평균 : %f\n", sum / x); //평균 = 자료의 총합 / 자료의 개수
	return 0;
}*/

//9번
/*#include <stdio.h>

int main(void)
{
	int num, i = 5, sum = 0;

	while (i--) //i를 입력한 정수의 개수로 했는데 한 개씩 입력할 때마다 --

	{
		printf("정수입력 : ");
		scanf_s("%d", &num);

		sum += num;

		if (num < 1)
		{
			printf("1 이상의 정수만 입력할 수 있습니다. 다시 입력해주세요.\n");
			i += 1; //0이 입력되면 기회 다시 주기
		}
	}
	printf("총 합: %d", sum);
	return 0;
}*/
//10번
/*#include <stdio.h>
int main(void)
{

int i = 1, o;
while (i <= 5) //5째줄까지
	{
	int o = 1; //o = ○
	while (o < i)
	{
	printf("○");
	o++;
	}
	printf("*\n");
	i++;
	}
	return 0;
}*/

//10번
/*#include <stdio.h>
int main(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("! : %Lf\n", num);
	return 0;
}*/

//11번
/*#include <stdio.h>
int main(void)
{
	int x = 1, sum = 0;
	while (x != 0)
	{
		printf("수를 입력하세요: ");
		scanf_s("%d", &x);

		sum += x;
	}
	printf("총 합은 %d입니다.\n", sum);
	return 0;
}*/

//12번
/*#include <stdio.h>
int main(void)
{
	int num = 0, sum = 0;

	do
	{
		sum += num;
		num = num + 2;

	} while (num <= 100); //do while은 명령문 먼저 실행 후 반복 여부 결정, 따라서 조건이 맞지 않아도 적어도 한 번은 돌아감

	printf("총 합 : %d \n", sum);
	return 0;
}*/

//13번


/*
#include <stdio.h>
int main(void)
{
	int start, end, result = 0;

	printf("시작과 끝 입력 : ");
	scanf_s("%d %d", &start, &end);


	for (; start <= end; start++) //조건은 시작 값에서 끝 값까지 더할건데 하나씩 증가시키면서
		result += start;

	printf("총 합 : %d\n", result);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int n, i = 1, result = 1; //result 값 1부터 0넣으면 0곱해져서 0이 출력됨.

	printf("숫자 입력하세요 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++)
		result *= i;

	printf("%d! = %d \n", n, result);
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int x, y;
	for (x = 2; x <= 9; x++) //9단까지만
	{
		if (x % 2 != 0)
			continue; // 짝수단만 받을거고
		for (y = 1; y <= 9; y++)
		{
			if (x < y) //단보다 숫자가 커지는 순간까지 break
				break;
			printf("%d x %d = %d\n", x, y, x * y);
		}
		printf("\n");
	}
	return 0;
}*/

/*
//3번
#include <stdio.h>
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0) //7의 배수 또는 9의 배수
			printf("7의 배수 또는 9의 배수 : %d\n", i);
	}
	return 0;
}*/

//4번
/*#include <stdio.h>
int main(void)
{
	int x, y;
	printf("차를 구하고 싶은 정수 2개를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);
	
	if (abs(x - y) >= 0) //절댓값을 씌워서 계산
	{
		printf("두 수의 차 = %d", abs(x - y));

	}
	return 0;
}*/

//9번
/*#include <stdio.h>
int main(void)
{
	int kor, eng, math, score;

	printf("국어, 영어, 수학 점수를 순서대로 입력하세요 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	score = (kor + eng + math) / 3; //score = 세 과목의 평균

	switch (score/10)
	{
	case 9: //앞자리가 9면 A
		printf("90점 이상은 A\n");
		break;
	case 8: //8로 시작하면 B
		printf("80점 이상 90점 미만은 B\n");
		break;
	case 7:
		printf("70점 이상 80점 미만은 C\n");
		break;
	case 5:
		printf("50점 이상 70점 미만은 D\n");
		break;
	default: //나머지는 F
		printf("F입니다.");
	}
	return 0;
}*/
//7번
/*#include <stdio.h>
int main(void)
{
	int x, y;
	int result;
	printf("차를 구할 두 정수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);

	result = (x > y) ? x - y : y - x; //만약에 처음 입력한 수가 더 크면 앞에서 뒤 빼고 그게 아니면 뒤에서 앞 수를 뺌
	printf("차 : %d\n", result);
	
	return 0;
}*/
//8번
/*#include <stdio.h>
int main(void)
{
	int A = 0, Z = 0;
	
	printf("9 이하의 자연수만 입력해주세요\n");
	scanf_s("%d %d", &A, &Z);

	if (A + Z == 9) //(10A + Z) + (10Z + A) = 99임을 이용해 식 정리 해주면 A + Z = 9
	{
		printf("%2d%d\n", A, Z); //자릿수 맞춤
		printf("+%d%d\n", Z, A);
		printf("---\n");
		printf(" 99");

	}
	else
		printf("틀렸습니다.\n*hint) A + Z = 9인 값을 입력하면 답이 나와요");

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int score, kor, eng, math;

	printf("국어, 영어, 수학 점수를 순서대로 입력해주세요 : ");
	scanf_s("%d %d %d", &kor, &eng, &math);
	score = (kor + eng + math) / 3;

	if (score >= 90)
		printf("90점 이상은 A");

	else if (score >= 80)
		printf("80점 이상 90점 미만은 B");

	else if (score >= 70)
		printf("70점 이상 80점 미만은 C");

	else if (score >= 50)
		printf("50점 이상 70점 미만은 D");

	else
		printf("50점 미만은 F");
	
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int time, hour, min, sec;
	printf("초를 입력하세요 : ");
	scanf_s("%d", &time);

	hour = time / 3600; //입력한 시간 3600(1시간은 3600초)
	min = time % 3600 / 60; //hour의 나머지
	sec = time % 3600 % 60; //min 의 나머지

	printf("시 : %d, 분 : %d, 초 : %d", hour, min, sec);
	return 0;
}
/*
#include <stdio.h>
int main(void)
{

	int a = 20;
	int result;
	result = --a - 5;
	printf("%d", result);
	return 0;
}
*/