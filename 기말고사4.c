/*#include <stdio.h>
int main(void)
{
	int* numPtr;
	int num1 = 10;
	
	numPtr = &num1;

	printf("%p\n", numPtr);
	printf("%p\n", &num1);
	return 0;                                                            
}*/
/*
#include <stdio.h>
int main(void)
{
	int* numPtr;
	int num1 = 10;
	numPtr = &num1;

	*numPtr = 20;
	printf("%d\n", *numPtr); //20
	printf("%d\n", num1); //num1�� ���� 20���� �ٲ�� ���� �� �� �ִ�.
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 10;
	int* pnum = &num;
	*pnum = 20;
	printf("%d\n", *pnum);
	printf("%d\n", num);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };
	int* numPtr = numArr;
	printf("%d\n", *numPtr); //11 ���
	printf("%d\n", *numArr); //�迭�� ������//�׷��� ������ 11����
	printf("%d\n", numPtr[5]); //66
	printf("%d\n", sizeof(numArr)); //10*4(�޸𸮿� �����ϰ� �ִ� ���� ���)
	printf("%d\n", sizeof(numPtr)); //�迭�� �ּҰ� ����ִ� �������� ũ�⸦ ���� �������� ũ�Ⱑ ��µ�.
	//�� 64��Ʈ�ϱ� 8�� ��µǰ���
}*/

//����ڰ� �б� ����
/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	int binary[20] = { 0, };
	int position = 0;
	
	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;

		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = 0; i <= position-1; i++)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
	return 0;
}
*/
/*
//��¥ 2������ �ٲٱ�
#include <stdio.h>
int main(void)
{
	int num = 16;
	int binary[20] = { 0, };
	int position = 0;

	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;

		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = position - 1; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
	printf("\n");
	return 0;
}*/
/*
//���ڿ��� �����ϴ� ������ �迭
#include <stdio.h>
int main(void)
{
	char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL;
	p = arr;

	//int a �̰Ŵ� ������ ����Ű�µ� int *a �̰Ŵ� �ּ� ���� ����Ŵ

	printf("*p + 1�� �ּ� : %p, *p + 1�� ������ �� : %d\n", p + 1, *p + 1);//*p + 1�� arr[0] + 1�� ���� 101�� ���

	printf("*(p + 1)�� �ּ� : %p, *(p + 1)�� ������ �� : %d\n", p + 1, *(p + 1)); //arr[0+1]�̴ϱ� arr[1]�� ���� 200�� ���

	printf("*p++�� �ּ� : %p, *p++�� ������ �� : %d\n", p, (*p) + 1); //*p++�� ������ ������ ��� ���� �ڿ� +1�� �����ִϱ�(== arr[0]++�ϱ�) 101 ���
	
	printf("(*p)++�� �ּ� : %p, (*p)++�� ������ �� : %d\n", p, (*p) + 1); //������ �Ȱ��� (*p)++���⼭ ��ȣ�� ū �ǹ̰� ���⿡ 101 ��� ������ �ּ� ���� ������ ����
	
	printf("*++p�� �ּ� : %p, *++p�� ������ �� : %d\n", p + 1, *(p + 1)); //++p�� ���� �ٸ��� ���������̱⿡ ���� ���� �Ŀ� ������ ���� �����ϰ� arr[1]�� �ǹ��� 200 ���
	
	printf("++*p�� �ּ� : %p, ++*p�� ������ �� : %d\n", p, *p + 1); //�̰� ���� ���������̴ϱ� arr[0]���� ������ +1�� ���� ���� 101�� ��µȴ�.
	
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 10;
	int binary[20] = { 0, };
	int position = 0;

	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = position - 1; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };

	int* front = arr;
	int* back = &arr[5];
	int temp;
	int i;

	for (i = 0; i < 3; i++)
	{
		temp = *(front + i); //front + 0����// arr[i] = *(arr + i)���� �̿�
		*(front + i) = *(back - i); //front�� back�� �ٲٷ� �ϴµ� 
		*(back - i) = temp;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4];
	int arr2 = NULL;
	int i;
	for (i = 0; i < 5; i++)
		arr2 += *(ptr--);
	printf("%d", arr2);
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*(ptr) += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
	return 0;
}*/
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) += 2;
		printf("%d ", arr[i]);
	}
	return 0;
}