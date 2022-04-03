/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long A, B; //100000이상의 정수라 long long 변수를 사용했다.
	scanf("%lld %lld", &A, &B); //long long일 때는 %lld를 사용한다. 입력할 변수 넣기
	printf("%lld", (A + B) * (A - B)); //A@B형태 출력
	return 0;
}*/
/*두 정수(a, b)를 입력받아

a가 b보다 크면 1을, a가 b보다 작거나 같으면 0을 출력하는 프로그램을 작성해보자.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long a, b; //a와 b에게 변수 선언
	int result; //result = a>b라 선언
	scanf("%lld %lld", &a, &b); //입력할 변수 넣기
	result = a > b;
	printf("%lld", result); //결괏값 출력
	
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
	result = a != b; //a와 b가 같지 않으면 1출력, 같으면 0출력
	printf("%d", result);

	return 0;
}