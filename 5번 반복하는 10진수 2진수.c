#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, i = 5, num2 = 0, unit = 1, bit = 0;
	//num = 입력하는 숫자, i = 5번 반복하겠음
	//digits = 2진수의 최대 자리 수를 의미(최대 7)
	
	while (i--)
	{
		while (1)
		{
			printf("100 이하의 자연수(10진수)를 입력하세요 : ");
			scanf("%d", &num);
			if (1 <= num && num <= 100) // 1 ~ 100 이하의 자연수만 받음.
				break;
		}
		int digits = 0;
		num2 = num; //계산할 때 /2가 계속 되니까 앞의 num과 구분해주기 위해서 같은 값으로 만들었음

		while (1)
		{
			digits++; //자릿수 1개씩 증가

			num2 /= 2; //2로 나누었을 때 최대 어디까지 나누어 떨어지는지
			if (num2 == 0) //더 이상 나누어 떨어질 수 없을 때가 되면 break
				break;
		}
		//자리 수만큼 shift를 할 건데, 해당 자릿수가 0인지 1인지 비트연산자로 판단!
		 
		//unit : 판별할 수의 자릿수가 0인지 1인지 판별해 계산하려고 비트 연산을 위해 만듦
		while (digits--) //총 자릿수만큼 반복
		//unit = 비트 연산을 위해 만듦(판별할 수의 자릿수가 0인지 1인지 판별해야 계산이 가능해서)
		//		 결과는 2진수로 했을 때 10아니면 00이기 때문에 2 or 0밖에 안 나오니 그걸 이용해서 뒤의 2번째 자리를 알아내는 것임.

		{
			bit = num & unit;
			printf("%d ", bit);
			
			num = num >> 1; //shift를 이용해 한 자리씩 옮겨가며 검사
		}
		printf("\n");
	}
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0, i = 5, num2 = 0, unit = 1, bit = 0;
	//num = 입력하는 숫자, i = 5번 반복하겠음
	//digits = 2진수의 최대 자리 수를 의미(최대 7)
	while (i--)
	{
		while (1)
		{
			printf("10진수 입력(1~100): ");
			scanf("%d", &num);

			if (1 <= num && num <= 100)
				break;
		}

		int digits = 0;
		num2 = num;
		while (1)
		{
			digits++;

			num2 /= 2;
			if (num2 == 0)
				break;
		}

		int unit = 1;
		while (digits--)
		{
			int bit = num & unit;
			printf("%d ", bit);
			num = num >> 1;
		}
		printf("\n");
	}
	
}*/