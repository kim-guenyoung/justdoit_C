#include <stdio.h>
int main(void)
/*{//10���� ���� ��
	int num1 = 0XA7;
	printf("0xA7�� 10���� ���� �� : %d", num1);
}*/

/* { //�ε� �Ҽ��� ����� ���� : ��ǻ�ʹ� ��Ȯ�� ���� ǥ���ϴ� ���� �ƴ϶� �ٻ�ġ�� ǥ���ϴ� ���̴�.
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("0.1�� 100�� ���� ��� : %f\n", num);
	return 0;
}*/
/*{ //NOT ����
	int num1 = 15;
	int num2 = ~num1;

	printf("NOT ������ ��� : %d\n", num2);
	return 0;
}*/

/*{// �ƽ�Ű�ڵ�
	char ch1 = 'A';
	int ch2 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	return 0;
}*/
/*{ //���� �������� ���ߴ�.
	printf("���� �������� ���ߴ�.\n \"��~! ��~!\" ���� �Ϳ���.");
}*/
/*{//8����, 8���� ����, 16����, 16���� ����
	int num1 = 7, num2 = 13;
	printf("%o %#o\n", num1, num1);
	printf("%x %#x\n", num2, num2);
}*/

/*{//100 �����߿��� Ȧ�� ¦�� ���ϱ�
	int num = 0, sum = 0;
	do
	{
		sum += num;
		num = num + 2;
	} while (num <= 100); //do while�� ��ɹ� ���� ���� �� �ݺ� ���� ����, ���� ������ ���� �ʾƵ� ��� �� ���� ���ư�
	printf("�� �� : %d \n", sum);
	return 0;
}*/

/* {//��ܽ� ����ⰰ��
	int i = 1;
	int o;
	while (i <= 5) //5°�ٱ���
	{
		int o = 1; //o = ��
		while (o < i)
		{
			printf("��");
			o++;
		}
		printf("*\n");
		i++;

	}
	return 0;
}*/

/*{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000) //���� 5000�� �Ѵ� ���� �������Ͷ�
			break;
		num++;
	} //�� �پ� ���󰡴ٰ� �ݺ��� ������ Ż��
	printf("sum : %d\n", sum);
	printf("num : %d\n", num);

	return 0;
}*/

{
	int num = 0;
	while (num < 3)
	{
		printf("Hello world! %d\n", num);
		num++;
	}//while�� �ȿ��� ����Ǵ� ���� �ٽ� �ö󰡸� num =1�� �ǰ� ��� �ö󰡴ٰ� 3�� �Ǹ� ���� �������ؼ� Ż��!
	return 0;
}