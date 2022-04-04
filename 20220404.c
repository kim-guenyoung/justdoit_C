/*#include <stdio.h>
int main(void)
{
	int num1 = 15; //15 = 00001111
	int num2 = 20; //20 = 00010100
				// and =  00000100
				//  or =  00011111
				// xor =  00011011
	//우리가 한 건 and 이므로 00000100니까 4가 나와야됨.
	int num3 = num1 & num2;
	
	printf("AND 연산의 결과 : %d\n", num3);
	return 0;
}*/


/*#include <stdio.h>
int main(void)
{ //3*8/4
	int num = 3;
	int num2, num3;;

	num2 = num << 3;
	num3 = num2 >> 2;

	printf("%d\n", num2);
	printf("%d", num3);				(num << 3) >> 2;
	return 0;
}*/ 
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	//int num = 10;
	//int sz1 = sizeof(num);
	//int sz2 = sizeof(int);
	double rad;
	double area;
	printf("원의 반지름 입력 : ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이 : %f\n", area);
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%c %d\n", ch3, ch3);
	printf("%c %d\n", ch4, ch4);
	printf(ch1 + ch2);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	printf("literal int size : %d\n", sizeof(7));
	printf("literal double size : %d\n", sizeof(7.14));
	printf("literal char size : %d\n", sizeof('A'));
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	int num4 = 3.14;
	int num5 = 130;
	char ch = num5;
	short num6 = 10;
	short num7 = num6 + 10;
	printf("%d\n", num4);
	printf("%d\n", num5);
	printf("%d\n", ch); //-126 나오니 주의!! overflow
	printf("%d\n", num6);
	printf("%d", num7);
	return 0;
}*/
/*#include <stdio.h>
int main(void)
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f\n", num1); //245.000000
	printf("실수 3.1415를 정수로 : %d\n", num2); //3
	printf("큰 정수 129를 작은 정수로 : %d\n", ch); //-127
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult, divResult2;

	divResult = num1 / num2;
	divResult2 = (double)num1 / num2;
	printf("나눗셈 결과 : %f\n", divResult); //소수점을 버려서 
	printf("나눗셈 결과 : %f\n", divResult2); //3/4를 double 형 변환에 넣어줌

	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x1, y1, x2, y2, area;

	scanf("%d %d", &x1, &y1);
	printf("좌 상단의 x, y 좌표 : ");
	
	scanf("%d %d", &x2, &y2);
	printf("우 하단의 x, y 좌표 : ");

	area = (x2 - x1) * (y2 - y1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);
	
}