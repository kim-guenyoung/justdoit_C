#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0, i = 5, num2 = 0, unit = 1, bit = 0;
	//num = �Է��ϴ� ����, i = 5�� �ݺ��ϰ���
	//digits = 2������ �ִ� �ڸ� ���� �ǹ�(�ִ� 7)
	
	while (i--)
	{
		while (1)
		{
			printf("100 ������ �ڿ���(10����)�� �Է��ϼ��� : ");
			scanf("%d", &num);
			if (1 <= num && num <= 100) // 1 ~ 100 ������ �ڿ����� ����.
				break;
		}
		int digits = 0;
		num2 = num; //����� �� /2�� ��� �Ǵϱ� ���� num�� �������ֱ� ���ؼ� ���� ������ �������

		while (1)
		{
			digits++; //�ڸ��� 1���� ����

			num2 /= 2; //2�� �������� �� �ִ� ������ ������ ����������
			if (num2 == 0) //�� �̻� ������ ������ �� ���� ���� �Ǹ� break
				break;
		}
		//�ڸ� ����ŭ shift�� �� �ǵ�, �ش� �ڸ����� 0���� 1���� ��Ʈ�����ڷ� �Ǵ�!
		 
		//unit : �Ǻ��� ���� �ڸ����� 0���� 1���� �Ǻ��� ����Ϸ��� ��Ʈ ������ ���� ����
		while (digits--) //�� �ڸ�����ŭ �ݺ�
		//unit = ��Ʈ ������ ���� ����(�Ǻ��� ���� �ڸ����� 0���� 1���� �Ǻ��ؾ� ����� �����ؼ�)
		//		 ����� 2������ ���� �� 10�ƴϸ� 00�̱� ������ 2 or 0�ۿ� �� ������ �װ� �̿��ؼ� ���� 2��° �ڸ��� �˾Ƴ��� ����.

		{
			bit = num & unit;
			printf("%d ", bit);
			
			num = num >> 1; //shift�� �̿��� �� �ڸ��� �Űܰ��� �˻�
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
	//num = �Է��ϴ� ����, i = 5�� �ݺ��ϰ���
	//digits = 2������ �ִ� �ڸ� ���� �ǹ�(�ִ� 7)
	while (i--)
	{
		while (1)
		{
			printf("10���� �Է�(1~100): ");
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