#include <stdio.h>
int main(void)
/*{//10진수 정수 값
	int num1 = 0XA7;
	printf("0xA7의 10진수 정수 값 : %d", num1);
}*/

/* { //부동 소수점 생기는 이유 : 컴퓨터는 정확한 값을 표현하는 것이 아니라 근사치를 표현하는 것이다.
	int i;
	float num = 0.0;
	for (i = 0; i < 100; i++)
		num += 0.1;

	printf("0.1을 100번 더한 결과 : %f\n", num);
	return 0;
}*/
/*{ //NOT 연산
	int num1 = 15;
	int num2 = ~num1;

	printf("NOT 연산의 결과 : %d\n", num2);
	return 0;
}*/

/*{// 아스키코드
	char ch1 = 'A';
	int ch2 = 90;

	printf("%c %d\n", ch1, ch1);
	printf("%c %d\n", ch2, ch2);
	return 0;
}*/
/*{ //옆집 강아지가 말했다.
	printf("앞집 강아지가 말했다.\n \"멍~! 멍~!\" 정말 귀엽다.");
}*/
/*{//8진수, 8진수 형태, 16진수, 16진수 형태
	int num1 = 7, num2 = 13;
	printf("%o %#o\n", num1, num1);
	printf("%x %#x\n", num2, num2);
}*/

/*{//100 이하중에서 홀수 짝수 더하기
	int num = 0, sum = 0;
	do
	{
		sum += num;
		num = num + 2;
	} while (num <= 100); //do while은 명령문 먼저 실행 후 반복 여부 결정, 따라서 조건이 맞지 않아도 적어도 한 번은 돌아감
	printf("총 합 : %d \n", sum);
	return 0;
}*/

/* {//계단식 별찍기같은
	int i = 1;
	int o;
	while (i <= 5) //5째줄까지
	{
		int o = 1; //o = ○
		while (o < i)
		{
			printf("○");
			o++;
		}
		printf("*\n");
		i++;

	}
	return 0;
}*/

/*{
	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000) //합이 5000이 넘는 순간 빠져나와라
			break;
		num++;
	} //한 줄씩 따라가다가 반복문 밖으로 탈출
	printf("sum : %d\n", sum);
	printf("num : %d\n", num);

	return 0;
}*/

{
	int num = 0;
	while (num < 3)
	{
		printf("Hello world! %d\n", num);
		num++;
	}//while문 안에서 실행되는 것임 다시 올라가면 num =1이 되고 계속 올라가다가 3이 되면 조건 성립안해서 탈출!
	return 0;
}