//���� 2
/*#include <stdio.h>
int main(void)
{
	//���ۿ� �鷯 ũ����(500��), �����(700��), �ݶ�(400��)�� ����� �Ѵ�.
	//�ܵ��� �ϳ��� ������ �ʰ� �� �� ���� ������ �ϳ� �̻� �ݵ�� �����Ϸ���
	//��� ���Ÿ� �����ؾ� �ϴ°� ?
	int cream, shrimp, coke;
	printf("���� ����� ������ �ִ� �ݾ� : 3500\n");
	for (cream = 1; cream <= 7; cream++) //�ּ� �� �� �̻� �����ؾ��ϹǷ� 1�� ��������
	{
		for (shrimp = 1; shrimp <= 5; shrimp++)
		{
			for (coke = 1; coke < 9; coke++)

				if ((cream * 500) + (shrimp * 700) + (coke * 400) == 3500)
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", cream, shrimp, coke);
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");
	
	return 0;
}*/

//����1
// �� ���� ������ �Է� �޾Ƽ� �ִ� �����(GCD)�� ���ϴ� ���α׷��� �ۼ��� ����.
/*#include <stdio.h>
int main(void)
{
	int num1, num2;
	int i = 1;
	int A, B;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);
	A = num1 % i;
	B = num2 % i;
	//���� num1�� num2�� �ִ������� num1�̳� num2 ���� Ŭ �� ����.
	//num1 �Ǵ� num2�� num1�� num2�� �ִ������� ������ �������� 0�̴�.
	//��Ŭ���� ȣ������ ������ε� ������ �ذ��غ���.
	if (num1 < num2)
	{
		for (i = 1; i <= num1; i++)
			if (A == 0 && B == 0)
			{
				printf("%d ", i);
			}
		for (i =1; i<= num2; i++)
			if (A == 0 && B == 0)
			{
				printf("%d ", i);
			}
	}
	printf("\n");
	return 0;
}
*/
/*#include <stdio.h>

void change_time(int total_sec, int* hour, int* min, int* sec) //change_time���� ������ ���� hour, min, sec �����
{
	*hour = total_sec / 3600;
	*min = total_sec % 3600 / 60;
	*sec = total_sec % 3600 % 60;
}
int main(void)
{
	int hour, min, sec, total_sec; 
	
	printf("�� ��(sec)�� �Է� : ");
	scanf_s("%d", &total_sec);

	change_time(total_sec, &hour, &min, &sec); //main �Լ��� �ּ� �� ����

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.", total_sec, hour, min, sec);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	A:
		printf("1 : ���ϱ�, 2 : ����, 3 : ���ϱ�, 4 : ������\n");
		scanf_s("%d", &operator); //1������ 4����

		if (operator == 1)
		{
			printf("���ϱ�");
		}
		else
		{
			if (operator == 2)
			{
				printf("����");
			}
			else
			{
				if (operator == 3)
				{
					printf("���ϱ�");
				}
				if (operator == 4)
				{
					printf("������");
				}
				else
					printf("1���� 4������ �Է��� �� �ֽ��ϴ�.\n �ٽ� �Է����ּ���.");
				goto A;
			}
			return 0;
		}
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	while (1)
	{
		printf("1 : ���ϱ�, 2 : ����, 3 : ���ϱ�, 4: ������, 0 : ����");
		scanf_s("%d", operator);
	}
	if (operator == 1)
	{
		printf("���ϱ�");
	}
	else if (operator == 2)
	{
		printf("����");
	}
	else if (operator == 3)
	{
		printf("���ϱ�");
	}
	else if (operator == 4)
	{
		printf("������");
	}
	else if (operator == 0)
		printf("����");
	else
		printf("1���� 4������ �Է��� �� �ֽ��ϴ�.\n �ٽ� �Է����ּ���.");

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int operator;
	while(1)
	{ 
		printf("1 : ���ϱ�, 2 : ����, 3 : ���ϱ�, 4: ������, 0 : ����\n");
		scanf_s("%d", &operator);

		switch (operator)
		{
		case 1:
			printf("���ϱ�\n");
			break;
		case 2:
			printf("����\n");
			break;
		case 3:
			printf("���ϱ�\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 0:
			printf("����\n");
			break;

		default:
			printf("1���� 4������ �Է��� �� �ֽ��ϴ�. �ٽ� �Է����ּ���.");
		}
		if (operator == 0)
			break;
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int score = 0;

	pritnf("������ �Է��ϼ��� : ");
	scanf_s("%d\n", score);

	switch (score / 10)
	{
	case 10:
		printf("100���� A");
		break;
	case 9: //���ڸ��� 9�� A
		printf("90�� �̻��� A\n");
		break;
	case 8: //8�� �����ϸ� B
		printf("80�� �̻� 90�� �̸��� B\n");
		break;
	case 7:
		printf("70�� �̻� 80�� �̸��� C\n");
		break;
	case 5:
		printf("50�� �̻� 70�� �̸��� D\n");
		break;
	default: //�������� F
		printf("F�Դϴ�.");
	}
	return 0;
}