/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	if (num == 1) { //1�̸� number 1
		printf("number 1\n");
	}
	else if (num == 2) {
		printf("number 2\n"); //2�� number 2
	}
	else {
		printf("other\n"); //1, 2�� ������ ��� ���� other
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	for (num = 0; num <20; num ++) //20���� ���� �� �߿���
	{
		if (num % 2 == 0) //2�� ������ ��������
			continue; //��� �ϰ� Ȧ���� ���
		printf("%d\n", num);
	}
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 2;
	num = Increment(num);
	return 0;
}
int Increment(int n)
{
	n++;
	return n;
}

#include <stdio.h>
int numcompare(int num1, int num2); //���� ��
int main(void)
{
	printf("3, 4 �� ū �� : %d", numcompare(3, 4)); //�����Ϸ����� main �Լ����� ���Ŀ� �����ϴ� �Լ��� �̸� �˷���ߵ�!!
	return 0;
}
int numcompare(int num1, int num2) 
{
	if (num1 > num2)
		return num1;
	else
	
	return num2;
}*/

#include <stdio.h>
int main (void)
{
	int num = 2;
	num = Increment(num);
	printf("%d", num);
	return 0;
}

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n = 4;
	int Increment(n);

	printf("%d", n);
	return n;
}*/