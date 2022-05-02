/*#include <stdio.h>
int main(void)
{
	int score = 0;
	while (1)
	{
		printf("학점을 입력하세요 : ");
		scanf_s("%d\n", &score);

		if (score == 0)
			printf("종료");
		break;
	}
		switch (score / 10)
		{
		case 10:
		case 9: //앞자리가 9, 10이면 A
			printf("90점 이상은 A\n");
			break;
		case 8: //8로 시작하면 B
			printf("80점 이상 90점 미만은 B\n");
			break;
		case 7:
			printf("70점 이상 80점 미만은 C\n");
			break;
		case 6:
		case 5:
			printf("50점 이상 70점 미만은 D\n");
			break;
		default: //나머지는 F
			printf("F입니다.");
		}
	return 0;
}*/



/*#include <stdio.h>
int main(void)
{
	int operator, score;
	printf("1 : 더하기, 2 : 빼기, 3 : 곱하기, 4 : 나누기\n");
	scanf_s("%d", &operator);

	(operator == 1) ? printf("더하기") : printf("다른 연산자");
}*/

#include <stdio.h>
int main(void)
{
	int x, y;

	for (x = 2; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
			printf("%d x %d = %d\n", x, y, x*y);
		printf("\n");
	}
	return 0;
}