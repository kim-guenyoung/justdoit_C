#include <stdio.h>
int GCD(int num1, int num2);
int LCM(int num1, int num2);
//main 함수를 먼저 쓰고 싶으니까 변수 선언해주기

int main(void)
{
	int num1, num2;
	printf("두 수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 >= num2)
	{
		printf("\n");
		printf("두 수의 최대공약수 : %d\n", GCD(num1, num2));
	}
	else
	{
		printf("두 수의 최대공약수 : %d\n", GCD(num2, num1));
	}

	if (num1 > num2)
	{
		printf("\n");
		printf("두 수의 최소공배수 : %d", LCM(num1, num2));
	}
	else
		printf("두 수의 최소공배수 : %d", LCM(num2, num1));

}

int GCD(int num1, int num2)
{
	if (num1 % num2 == 0) //입력한 두 정수가 배수 관계라면
		return num2;
	else
		return GCD(num2, num1 % num2);
}

int LCM(int num1, int num2)
{
	if (num1 % num2 == 0) //만약 입력한 두 정수가 배수 관계라면
		return num1 * num2 / num2; //두 수를 곱하고 작은 수로 나누기
	else
		return num1 * num2 / GCD(num2, num1); //그게 아니면 둘이 곱한 거를 두 수의 최대공약수로 나누어준다.
}