/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	if (num == 1) { //1이면 number 1
		printf("number 1\n");
	}
	else if (num == 2) {
		printf("number 2\n"); //2면 number 2
	}
	else {
		printf("other\n"); //1, 2를 제외한 모든 수는 other
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	for (num = 0; num <20; num ++) //20보다 작은 수 중에서
	{
		if (num % 2 == 0) //2로 나누어 떨어지면
			continue; //계속 하고 홀수를 출력
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
int numcompare(int num1, int num2); //숫자 비교
int main(void)
{
	printf("3, 4 중 큰 수 : %d", numcompare(3, 4)); //컴파일러한테 main 함수보다 이후에 선언하는 함수를 미리 알려줘야됨!!
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