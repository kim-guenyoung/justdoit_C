/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	int num3 = 30, num4 = 40;

	printf("num1 : %d, num2 : %d\n", num1, num2);

	num1 = 10, num2 = 20;
	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("num3 : %d, num4 : %d", num3, num4);
	return 0;
}*/
#include <stdio.h>
int main(void)
{
	int num1 = 10;
	int num2 = (--num1) + 2;

	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("num2 : %d\n", num2);
	printf("num1 : %d\n", num1);
	return 0;
}