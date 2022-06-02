//문제 1
/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = arr; //arr의 주소 값 받기
	int i;
	for (i = 0; i < 5; i++) 
	{
		*ptr += 2;//포인터 연산 2씩 증가
		ptr++;
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//문제2
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3 , 4, 5 };
	int* ptr = arr;
	int i;
	for (i = 0; i < 5; i++)
	{
		*(ptr + i) += 2; //for문 이용해서 i값 늘려주면서 배열 하나하나 접근
		printf("%d ", arr[i]);
	}
	return 0;
}*/

//문제 3
/*
#include <stdio.h>
int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* ptr = &arr[4]; //마지막 배열에 포인터 변수 선언
	int i;
	int sum = 0;
	
	for (i = 0; i < 5; i++)
		sum += *(ptr--); //감소시키는 형태의 연산
	
	printf("배열에 입력된 정수의 총 합 : %d", sum);
	return 0;
}*/

//문제4
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
		temp = *(fptr + i); //fptr + 0걸음
		*(fptr + i) = *(bptr - i); //fptr과 bptr을 바꾸려 하는데 
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

	temp = ptr1; //ptr1값을 temp에 넣어주고
	ptr1 = ptr2; //ptr1값을 ptr2라 하자.
	ptr2 = temp; //그리고 ptr2의 값을 다시 temp 값이라 하면 ptr2 값은 temp값으로 ptr1값이 되고
	//ptr1 = ptr2에 의해 ptr1값은 ptr2값이 된다.
	printf("num1 : %d\nnum2 : %d", *ptr1, *ptr2); //주소 값 아니고 값이니까 * 사용
	// 위에서 num1은 10을 증가시켰으니 20
	//num2는 10을 감소시켰으니 10이 된다. 이 값을 서로 바꿔주니 10과 20이 나온다.
	return 0;
}*/
/*
#include <stdio.h>

int main(void)
{
	int arr[3] = { 0, 1, 2 };
	printf("배열의 이름 : %p\n", arr);
	printf("첫 번째 요소 : %p\n", &arr[0]);
	printf("두 번째 요소 : %p\n", &arr[1]);
	printf("세 번째 요소 : %p\n", &arr[2]);
	
	return 0;
}*/

#include <stdio.h>

int main(void) {

	int a[4] = { 100, 200, 300, 400 };

	// 1. 배열 이름의 의미  
	// 배열의 시작 부분을 가리키는 주소이다. 
	printf("배열의 이름 a : %p\n", a);
	printf("&a[0] %p\n", &a[0]);
	printf("&a[1] %p\n", &a[1]);
	printf("&a[2] %p\n", &a[2]);
	printf("&a[3] %p\n\n", &a[3]);

	// 아래와 같이 사용하면 오류 
	// a = &a[0]; 

	// 2. 1차원 배열 이름의 포인터 형 결정하는 방법 
	printf("*a : %d\n", *a);
	*a += 100;
	printf("*a : %d\n", *a);
	printf("a[0] : %d\n", a[0]);

	a[0] -= 100;
	printf("a[0] : %d\n", a[0]);

	*(a + 1) += 100;
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);

	// 3. 포인터를 배열의 이름처럼 사용할 수 있다
	int* p = &a[0];  // int *p = a;와 같은 문장  
	printf("a[0] p[0]: %d %d\n", a[0], p[0]);
	printf("a[1] p[1]: %d %d\n", a[1], p[1]);
	printf("a[2] p[2]: %d %d\n", a[2], p[2]);
	printf("a[3] p[3]: %d %d\n", a[3], p[3]);

	// 4. 포인터의 연산
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3);
	p++;
	printf("%p\n", p);

	*(a + 1) += 100;
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);
	p--;
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3));

	// 5. 문자열 표현
	char str1[] = "HELLO";
	char* str2 = "WORLD";

	printf("%s %s\n", str1, str2);

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2);

	str1[1] = 'A'; //배열이니까 2번째 값만 바꾸겟다.
	//character가 쫙 연결된 형태로는 접근 불가
	// str1 = "AAAAA"; 오류  
	// str2[0] = 'A';  오류  
	printf("%s %s\n", str1, str2);


	// 6. 포인터 배열
	int n1 = 100, n2 = 200, n3 = 300;
	int* arr1[3] = { &n1, &n2, &n3 };

	printf("%d %d %d\n", *arr1[0], *arr1[1], *arr1[2]);

	char* arr2[4] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	// char *arr2[] 로 선언할 수도 있다.  
	printf("%s\n", arr2[0]);
	printf("%s\n", arr2[1]);
	printf("%s\n", arr2[2]);
	printf("%s\n", arr2[3]);


	// 7. 배열 포인터
	// 배열을 가리키는 포인터, 포인터의 선언 
	// int *pa[4];    // 포인터를 가진  배열, 배열의 선언 
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