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
	printf("%d\n", num1); //num1의 값도 20으로 바뀌는 것을 알 수 있다.
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
	printf("%d\n", *numPtr); //11 출력
	printf("%d\n", *numArr); //배열의 역참조//그래도 여전히 11이쥬
	printf("%d\n", numPtr[5]); //66
	printf("%d\n", sizeof(numArr)); //10*4(메모리에 차지하고 있는 공간 출력)
	printf("%d\n", sizeof(numPtr)); //배열의 주소가 들어있는 포인터의 크기를 구해 포인터의 크기가 출력됨.
	//난 64비트니까 8이 출력되겠지
}*/

//사용자가 읽기 쉽게
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
//진짜 2진수로 바꾸기
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
//문자열을 저장하는 포인터 배열
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

	//int a 이거는 정수를 가리키는데 int *a 이거는 주소 값을 가리킴

	printf("*p + 1의 주소 : %p, *p + 1의 데이터 값 : %d\n", p + 1, *p + 1);//*p + 1은 arr[0] + 1의 값인 101이 출력

	printf("*(p + 1)의 주소 : %p, *(p + 1)의 데이터 값 : %d\n", p + 1, *(p + 1)); //arr[0+1]이니까 arr[1]의 값인 200이 출력

	printf("*p++의 주소 : %p, *p++의 데이터 값 : %d\n", p, (*p) + 1); //*p++은 포인터 연산을 모두 끝난 뒤에 +1을 더해주니까(== arr[0]++니까) 101 출력
	
	printf("(*p)++의 주소 : %p, (*p)++의 데이터 값 : %d\n", p, (*p) + 1); //위에랑 똑같이 (*p)++여기서 괄호는 큰 의미가 없기에 101 출력 심지어 주소 값도 동일할 것임
	
	printf("*++p의 주소 : %p, *++p의 데이터 값 : %d\n", p + 1, *(p + 1)); //++p는 위와 다르게 전위연산이기에 전위 연산 후에 포인터 연산 진행하고 arr[1]을 의미해 200 출력
	
	printf("++*p의 주소 : %p, ++*p의 데이터 값 : %d\n", p, *p + 1); //이것 또한 전위연산이니까 arr[0]에서 시작해 +1을 해준 값인 101이 출력된다.
	
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
		temp = *(front + i); //front + 0걸음// arr[i] = *(arr + i)임을 이용
		*(front + i) = *(back - i); //front와 back을 바꾸려 하는데 
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