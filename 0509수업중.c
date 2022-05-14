/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("세 개의 정수 중 값이 가장 작은 수 : %d\n", num1, num2, num3, num_compare(num1, num2, num3));

	return 0;
}

int num_compare(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num3 : num1;
	else
		return(num2 > num3) ? num3 : num2;
}*/

#include <stdio.h>
int main(void)
{
	int temp;
	printf("섭씨 온도 입력 : ");
	scanf_s("%d", &temp);
}
