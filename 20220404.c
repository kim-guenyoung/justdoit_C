/*#include <stdio.h>
int main(void)
{
	int num1 = 15; //15 = 00001111
	int num2 = 20; //20 = 00010100
				// and =  00000100
				//  or =  00011111
				// xor =  00011011
	//�츮�� �� �� and �̹Ƿ� 00000100�ϱ� 4�� ���;ߵ�.
	int num3 = num1 & num2;
	
	printf("AND ������ ��� : %d\n", num3);
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
	printf("���� ������ �Է� : ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ���� : %f\n", area);
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
	printf("%d\n", ch); //-126 ������ ����!! overflow
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

	printf("���� 245�� �Ǽ��� : %f\n", num1); //245.000000
	printf("�Ǽ� 3.1415�� ������ : %d\n", num2); //3
	printf("ū ���� 129�� ���� ������ : %d\n", ch); //-127
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult, divResult2;

	divResult = num1 / num2;
	divResult2 = (double)num1 / num2;
	printf("������ ��� : %f\n", divResult); //�Ҽ����� ������ 
	printf("������ ��� : %f\n", divResult2); //3/4�� double �� ��ȯ�� �־���

	return 0;
}*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x1, y1, x2, y2, area;

	scanf("%d %d", &x1, &y1);
	printf("�� ����� x, y ��ǥ : ");
	
	scanf("%d %d", &x2, &y2);
	printf("�� �ϴ��� x, y ��ǥ : ");

	area = (x2 - x1) * (y2 - y1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.", area);
	
}