/*#include <stdio.h>
int main(void)
{
	int num;
	int flag = 0;// flag의 값을 조작해줌으로써 처음에 출력하는지 중간에 출력하는지 확인
	printf("정수 : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		if (flag ==1)
			printf("-");
		printf("(2의 배수)");
	}
	{
		if (num % 3 == 0)
			if flag(!= )
			printf("(3의 배수)");
	}
	if (num % 5 == 0)
		printf("(5의 배수)");

	if (num % 7 == 0)
		printf("(7의 배수)");

	if (num % 9 == 0)
		printf("(9의 배수)");


}*/
//형 변환에 있는 연산을 봐주어야됨. 문제 5번

#include <stdio.h>
int main(void)
{
	int num;
	printf("주사위를 던질 수 :");
	scanf_s("%d", &num);
	int cnt[6] = { 0, };
	for (int i = 0; i < num; i++)
	{
		int r = rand() & 6 + 1;
		cnt[r - 1]++;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("눈 : %d : ", i + 1)
	}
}