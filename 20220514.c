/*#include <stdio.h>
int main(void)
{
	int time, work_day, work_time, tax = 0;
	int wage = 0;
	//time : 근무시수, work_time : 근무시간대
	printf("근무시수 : ");
	scanf_s("%d", &time);
	printf("근무일(1 주중, 2 주말 : ");
	scanf_s("%d", &work_day);
	printf("근무시간대(1 주간, 2 야간) : ");
	scanf_s("%d", &work_time);
	{
		if (work_day == 1) //근무일이 주중이면
			wage = 9500 * time;
		{
			if (work_time == 2) //근무시간대가 야간이면
				wage = 9500 * time * 1.1; //10% 할증
		}
		if (work_day == 2) //근무일이 주말이면
			wage = 11000 * time;
		{
			if (work_time == 2) //근무시간대가 야간이면
				wage = 11000 * time * 1.1;
		}

	}

	if (time >= 10) //10시간 넘으면
		wage += 30000; //30000원 특별수당

	if (wage > 100000) //일당이 100000을 넘어가면 세금 떼기
		tax = wage * 0.05;


	if (tax == 0)
		printf("일당은 %d원, 세금 없음, 실수령액은 %d원", wage, wage-tax);
	else
		printf("일당은 %d원, 세금은 %d원, 실수령액은 %d원", wage, tax, wage - tax);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num, i, j;
	int cnt = 1;
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			{
				if ((num % i) == 0)
					cnt++;
				if (cnt > 2)
					break;
			}

		}
		if (cnt == 2)
			printf("%d ", i);
		continue;
	}
	return 0;
}*/

#include <stdio.h>
int a;
int b;
int i;

int main(void)
{

	printf("입력 : ");
	scanf_s("%d %d", &a, &b);
	
	for (i = a; i <= b; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}



int is_prime(int num)
{
	for (i = a; i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}