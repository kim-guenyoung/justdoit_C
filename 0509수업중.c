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
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("�� ���� ���� �� ���� ���� ���� �� : %d\n", num1, num2, num3, num_compare(num1, num2, num3));

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
	printf("���� �µ� �Է� : ");
	scanf_s("%d", &temp);
}
