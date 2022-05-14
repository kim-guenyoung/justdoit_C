#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;

	for (num = 1; num <= 100; num++)
	{
		if (sum >= 2000) //만약 2000이 되면 끝낼 것이기 때문에 괄호X
			break;

		if ((num % 10) == 6) //10으로 나누었을 때 나머지가 6이면(= 6으로 끝나는 수는) 건너뛰고 다음 조건문으로 넘어간다.

			continue;

		if ((num % 5) == 0) //5로 나누었을 때의 조건을 만족한 수만 한 번씩 더 더해줌.
		{
			sum += num;
		}
		sum += num; //완전 최종 출력된 값들을 합산한다.
	}
	printf("계산한 값 : %d", sum);
	return 0;
}