//���� 1
/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr; //arr�� �ּ� �� �ޱ�
	int i;
	for (i = 0; i < 5; i++) 
	{
		*ptr += 2;//������ ���� 2�� ����
		ptr++;
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//����2
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3 , 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) += 2; //for�� �̿��ؼ� i�� �÷��ָ鼭 �迭 �ϳ��ϳ� ����
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//���� 3
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4]; //������ �迭�� ������ ���� ����
	int i;
	int sum = 0;
	
	for (i = 0; i < 5; i++)
		sum += *(ptr--); //���ҽ�Ű�� ������ ����
	
	printf("�迭�� �Էµ� ������ �� �� : %d", sum);
	return 0;
}*/

//����4
/*
#include <stdio.h>
int main(void)
{
	int arr[6] = { 1, 2, 3, 4 , 5, 6 };

	int* fptr = arr;
	int* bptr = &arr[5];
	int temp;
	int i;

	for (i = 0; i < 3; i++)
	{
		temp = *(fptr + i); //fptr + 0����
		*(fptr + i) = *(bptr - i); //fptr�� bptr�� �ٲٷ� �ϴµ� 
		*(bptr - i) = temp;

	}
	for(i =0; i<6; i++)
		printf("%d ", arr[i]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL;
	p = arr;

}*/
/*
#include <stdio.h>

int main(void)

{

	int num1 = 10;

	int num2 = 20;

	int* temp;



	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10; //20
	*ptr2 -= 10; //10

	temp = ptr1; //ptr1���� temp�� �־��ְ�
	ptr1 = ptr2; //ptr1���� ptr2�� ����.
	ptr2 = temp; //�׸��� ptr2�� ���� �ٽ� temp ���̶� �ϸ� ptr2 ���� temp������ ptr1���� �ǰ�
	//ptr1 = ptr2�� ���� ptr1���� ptr2���� �ȴ�.
	printf("num1 : %d\nnum2 : %d", *ptr1, *ptr2); //�ּ� �� �ƴϰ� ���̴ϱ� * ���
	// ������ num1�� 10�� ������������ 20
	//num2�� 10�� ���ҽ������� 10�� �ȴ�. �� ���� ���� �ٲ��ִ� 10�� 20�� ���´�.
	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("�迭�� �̸� : %p\n", arr);
	printf("ù ��° ��� : %p\n", &arr[0]);
	printf("�� ��° ��� : %p\n", &arr[1]);
	printf("�� ��° ��� : %p\n", &arr[2]);
	
	return 0;
}*/

#include <stdio.h>

int main(void) {

	int a[4] = { 100, 200, 300, 400 };

	// 1. �迭 �̸��� �ǹ�  
	// �迭�� ���� �κ��� ����Ű�� �ּ��̴�. 
	printf("�迭�� �̸� a : %p\n", a);
	printf("&a[0] %p\n", &a[0]);
	printf("&a[1] %p\n", &a[1]);
	printf("&a[2] %p\n", &a[2]);
	printf("&a[3] %p\n\n", &a[3]);

	// �Ʒ��� ���� ����ϸ� ���� 
	// a = &a[0]; 

	// 2. 1���� �迭 �̸��� ������ �� �����ϴ� ��� 
	printf("*a : %d\n", *a);
	*a += 100;
	printf("*a : %d\n", *a);
	printf("a[0] : %d\n", a[0]);

	a[0] -= 100;
	printf("a[0] : %d\n", a[0]);

	*(a + 1) += 100;
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);

	// 3. �����͸� �迭�� �̸�ó�� ����� �� �ִ�
	int* p = &a[0];  // int *p = a;�� ���� ����  
	printf("a[0] p[0]: %d %d\n", a[0], p[0]);
	printf("a[1] p[1]: %d %d\n", a[1], p[1]);
	printf("a[2] p[2]: %d %d\n", a[2], p[2]);
	printf("a[3] p[3]: %d %d\n", a[3], p[3]);

	// 4. �������� ����
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3);
	p++;
	printf("%p\n", p);

	*(a + 1) += 100;
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);
	p--;
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3));

	// 5. ���ڿ� ǥ��
	char str1[] = "HELLO";
	char* str2 = "WORLD";

	printf("%s %s\n", str1, str2);

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2);

	str1[1] = 'A'; //�迭�̴ϱ� 2��° ���� �ٲٰٴ�.
	//character�� �� ����� ���·δ� ���� �Ұ�
	// str1 = "AAAAA"; ����  
	// str2[0] = 'A';  ����  
	printf("%s %s\n", str1, str2);


	// 6. ������ �迭
	int n1 = 100, n2 = 200, n3 = 300;
	int* arr1[3] = { &n1, &n2, &n3 };

	printf("%d %d %d\n", *arr1[0], *arr1[1], *arr1[2]);

	char* arr2[4] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	// char *arr2[] �� ������ ���� �ִ�.  
	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);
	printf("%s\n", arr2[3]);


	// 7. �迭 ������
	// �迭�� ����Ű�� ������, �������� ���� 
	// int *pa[4];    // �����͸� ����  �迭, �迭�� ���� 
	int arr3[4] = { 1, 2, 3, 4 };
	int(*pa)[4];

	pa = &arr3;
	printf("%d %d %d %d\n", (*pa)[0], (*pa)[1], (*pa)[2], (*pa)[3]);

	char arr4[4][8] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	char(*ps)[8];

	ps = arr4;
	int i;
	for (i = 0; i < 4; i++) {
		printf("%s\n", *ps++);
	}


	return 0;
}