/*#include <stdio.h>
int main(void)
{
	int num = 7;
	int* pnum; //int * : int형 변수의 주소 값을 지칭하는 포인터 변수의 선언
	pnum = &num; //pnum : 포인터 변수의 이름
}
//주소 값의 크기와 포인터 변수의 크기가 동일한 것은 당연하다.
*/
/*
#include <stdio.h>
int main(void)
{
	int num1 = 40;
	int num2 = 100;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp = NULL;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름 : %p\n", arr);
	printf("배열의 첫 번째 요소 : %p\n", &arr[0]);
	printf("배열의 두 번째 요소 : %p\n", &arr[1]);
	printf("배열의 세 번째 요소 : %p\n", &arr[2]);
	//arr = &arr[i] 값의 저장이 불가능해서 이 문장은 컴파일 에러를 일으킴

	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g\n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;

	printf("%d %g", *arr1, *arr2);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 10, 20, 30 };
	int* ptr = arr;

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);

	printf("%d %d\n", *ptr, *arr);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int* ptr1 = 0x0010;
	double* ptr2 = 0x0010;
	printf("%p %p\n", ptr1 + 1, ptr1 + 2); //14 18
	printf("%p %p\n", ptr2 + 1, ptr2 + 2); //18 20
	
	ptr1++;
	ptr2++;

	printf("%p %p\n", ptr1, ptr2);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2)); //실제로는 4바이트씩 가는거임
	
	printf("%d ", *ptr); //11
	ptr++;
	printf("%d ", *ptr); //22
	ptr++;
	printf("%d ", *ptr); //33
	ptr--;
	printf("%d ", *ptr); //22
	ptr--;
	printf("%d ", *ptr); //11
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
		printf("%d ", arr[i]);
	}
	return 0;
}*/
/*
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
}*/