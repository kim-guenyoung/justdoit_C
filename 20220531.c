#include <stdio.h>
int main(void)
{

	int a[4] = { 100, 200, 300, 400 }; //길이가 4짜리인 배열

	// 1. 배열 이름의 의미  
	// 배열의 시작 부분을 가리키는 주소이다. 
	printf("배열의 이름 a : %p\n", a); //a라는 배열의 이름 : 000000292E3BF268
	printf("&a[0] %p\n", &a[0]); //a의 0번째 인덱스의 주소 값 : 000000292E3BF268 
	printf("&a[1] %p\n", &a[1]); 
	printf("&a[2] %p\n", &a[2]);
	printf("&a[3] %p\n\n", &a[3]);

	// 아래와 같이 사용하면 오류 
	// a = &a[0]; 이 문장은 컴파일 에러를 일으키는데
	//그 이유는 배열의 이름은 배열의 시작 주소 값을 의미하는데, 그 형태는 값의 저장이 불가능한 상수이기 때문이다.

	// 2. 1차원 배열 이름의 포인터 형 결정하는 방법
	printf("*a : %d\n", *a); //100이 출력될 텐데, 이는 *로 값을 받았으니 100이 출력되는 것
	*a += 100; //참조 값에 +100이니 
	printf("*a : %d\n", *a); //200이 출력되고
	printf("a[0] : %d\n", a[0]); //그 0번째 값을 받으면 똑같이 200

	a[0] -= 100; //값에 -100
	printf("a[0] : %d\n", a[0]); //원상태 100으로 돌아왔다.

	*(a + 1) += 100; //인덱스 1번째 값에 100을 더했으니
	printf("*a : %d\n", *(a + 1)); //300
	printf("a[1] : %d\n", a[1]); //그 값을 받았으니 똑같이 300

	// 3. 포인터를 배열의 이름처럼 사용할 수 있다
	int* p = &a[0];  // int *p = a;와 같은 문장  
	printf("a[0] p[0]: %d %d\n", a[0], p[0]); //포인터 p를 배열로 사용
	printf("a[1] p[1]: %d %d\n", a[1], p[1]);
	printf("a[2] p[2]: %d %d\n", a[2], p[2]);
	printf("a[3] p[3]: %d %d\n", a[3], p[3]);

	// 4. 포인터의 연산
	printf("%p %p %p %p\n", p, p + 1, p + 2, p + 3); //주소값 받음
	p++;
	printf("%p\n", p); //p++에 의해 인덱스 1번쨰 값

	*(a + 1) += 100; //여기도 첫번째 값에 +100인데 아까 마지막이 300이어서 400출력
	printf("*a : %d\n", *(a + 1));
	printf("a[1] : %d\n", a[1]);
	p--;
	printf("%d %d %d %d\n", *p, *(p + 1), *(p + 2), *(p + 3)); //p++한 뒤에 p--니까 다시 원위치로 돌아와
	//100 400 300 400이 출력되는 것임

	// 5. 문자열 표현
	char str1[] = "HELLO";
	char* str2 = "WORLD";

	printf("%s %s\n", str1, str2); //문자열 합쳐져 HELLO WORLD

	str2 = "EVERYONE";
	printf("%s %s\n", str1, str2);

	str1[1] = 'A'; //str[1]인 E를 A로 바꿈
	// str1 = "AAAAA"; 오류; //*****배열로 받아서 ?******
	// str2[0] = 'A';  오류; 이게 오류가 뜨는 이유는 str1은 변수 형태로 문자열을 받았는데
	//str2는 문자열을 상수 형태로 받았기 때문에 바꿀 수 없는 것이다.
	printf("%s %s\n", str1, str2);


	// 6. 포인터 배열 : 포인터 변수로 이루어져 주소 값의 저장이 가능한 배열
	int n1 = 100, n2 = 200, n3 = 300;
	int* arr1[3] = { &n1, &n2, &n3 }; //주소 값을 저장할 수 있도록 포인터 변수를 선언

	printf("%d %d %d\n", *arr1[0], *arr1[1], *arr1[2]); //n1 n2 n3 값 반환

	char* arr2[4] = { "SPRING", "SUMMER", "FALL", "WINTER" };
	// char *arr2[] 로 선언할 수도 있다.  
	printf("%s\n", arr2[0]); //SPRING
	printf("%s\n", arr2[1]); //SUMMER
	printf("%s\n", arr2[2]); //FALL
	printf("%s\n", arr2[3]); //WINTER


	// 7. 배열 포인터
	// 배열을 가리키는 포인터, 포인터의 선언 
	//int *pa[4];    // 포인터를 가진  배열, 배열의 선언 
	int arr3[4] = { 1, 2, 3, 4 };
	int(*pa)[4];

	pa = &arr3; //pa도 이제 1, 2, 3, 4
	printf("%d %d %d %d\n", (*pa)[0], (*pa)[1], (*pa)[2], (*pa)[3]);

	char arr4[4][8] = {"SPRING", "SUMMER", "FALL", "WINTER"};
	char(*ps)[8];

	ps = arr4;
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%s\n", *ps++);
	}
	return 0;
}