/*#include <stdio.h>
int main(void)
{
	int score = 0;
	while (1)
	{
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d\n", &score);

		if (score == 0)
			printf("����");
		break;
	}
		switch (score / 10)
		{
		case 10:
		case 9: //���ڸ��� 9, 10�̸� A
			printf("90�� �̻��� A\n");
			break;
		case 8: //8�� �����ϸ� B
			printf("80�� �̻� 90�� �̸��� B\n");
			break;
		case 7:
			printf("70�� �̻� 80�� �̸��� C\n");
			break;
		case 6:
		case 5:
			printf("50�� �̻� 70�� �̸��� D\n");
			break;
		default: //�������� F
			printf("F�Դϴ�.");
		}
	return 0;
}*/



/*#include <stdio.h>
int main(void)
{
	int operator, score;
	printf("1 : ���ϱ�, 2 : ����, 3 : ���ϱ�, 4 : ������\n");
	scanf_s("%d", &operator);

	(operator == 1) ? printf("���ϱ�") : printf("�ٸ� ������");
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