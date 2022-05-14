#include <stdio.h>
int GCD(int num1, int num2);
int LCM(int num1, int num2);
//main �Լ��� ���� ���� �����ϱ� ���� �������ֱ�

int main(void)
{
	int num1, num2;
	printf("�� �� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 >= num2)
	{
		printf("\n");
		printf("�� ���� �ִ����� : %d\n", GCD(num1, num2));
	}
	else
	{
		printf("�� ���� �ִ����� : %d\n", GCD(num2, num1));
	}

	if (num1 > num2)
	{
		printf("\n");
		printf("�� ���� �ּҰ���� : %d", LCM(num1, num2));
	}
	else
		printf("�� ���� �ּҰ���� : %d", LCM(num2, num1));

}

int GCD(int num1, int num2)
{
	if (num1 % num2 == 0) //�Է��� �� ������ ��� ������
		return num2;
	else
		return GCD(num2, num1 % num2);
}

int LCM(int num1, int num2)
{
	if (num1 % num2 == 0) //���� �Է��� �� ������ ��� ������
		return num1 * num2 / num2; //�� ���� ���ϰ� ���� ���� ������
	else
		return num1 * num2 / GCD(num2, num1); //�װ� �ƴϸ� ���� ���� �Ÿ� �� ���� �ִ������� �������ش�.
}