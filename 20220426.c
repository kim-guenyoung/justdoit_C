/*#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;

	pnum = &num1;
	(*pnum) += 30;
	pnum = &num2;
	(*pnum) -= 30;

	printf("num1 : %d, num2 : %d", num1, num2);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d\n", num);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;
	(*ptr1) += 10;
	(*ptr2) -= 10;
	
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름 : %p\n", arr);
	printf("첫 번째 요소 : %p\n", &arr[0]);
	printf("두 번째 요소 : %p\n", &arr[1]);
	printf("세 번째 요소 : %p\n", &arr[2]);
	//arr = &arr[i];
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("&d %g\n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", arr1[0], arr2[0]);

	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0];

	printf("%d %d\n", ptr[0], arr[0]);
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);
	printf("%d %d\n", *ptr, *arr);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int* ptr1 = 0X0010;
	double* ptr2 = 0X0010;

	printf("%p %p\n", ptr1 + 1, ptr1 + 2);
	printf("%p %p\n", ptr2 + 1, ptr2 + 2);

	printf("%p %p\n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p\n", ptr1, ptr2);

	return 0;
}*/
