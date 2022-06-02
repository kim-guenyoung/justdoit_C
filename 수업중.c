/*
{//변수 선언의 의미
//배열 선언의 의미 : 특정 값을 거기에 불러오겠다 이런게 용이해서 이런의도
	//배열의 의미 : 주소를 의미(프로그래머가 특정위치에 맘대로 접근할 수 있게) 그래서 잘못 사용하면 크게 잘못될 수가 있음
*/
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";//큰 따옴표를 사용했다는 건 문자열이라는거야.
	printf("배열 str의 크기 : %d\n", sizeof(str));
	printf("널 문자 문자형 출력 : %c\n", str[13]); //여기서는 0의 의미가 진짜 없다는 의미군 (이거 공백 아니다 NULL이다)
	printf("널 문자 정수 출력 : %d\n", str[13]); //오오 정수로 하면 아스키코드인 0이 출력될것임
	//ch[4] = %c로 출력되면 아무것도 출력되진 않는데 %d로 출력하면 공백이니까 아스키코드 32(공백을 의미)가 출력될 것임

	str[12] = '?';
	printf("문자열 출력 : %s\n", str);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good time";
	printf("배열 str의 크기 :%d\n", sizeof(str)); //10
	printf("문자열 출력 : %s\n", str);
	return 0; 
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[50];
	int idx = 0;
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s\n", str);

	printf("문자 단위 출력 : ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	char i;
	int len = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	for(i = 0; voca[i]!=0; i++)
		len = i + 1;

	printf("%d", len);

	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char voca[100];
	char voca2[100] = { 0 }; //이거 안해주면 뒤에 이상한 문자 나옴 초기화 필수!!
	char i;
	int len = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	for (i = 0; voca[i] != 0; i++)
	{
		len++;
	}

	for (i = 1; i <= len; i++)
	{
		voca2[len - i] = voca[i - 1];
	}
	printf("%s", voca2);
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000

int main(void)
{
	char voca[MAX] = { 0 }; //아 이게 초기화를 해주는 이유가 그 뒤에 거를 처리해주기 위함이구나
	int i;
	int max = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	for (i = 0; i <= MAX; i++)
		if (65<=voca<=90 || 97<=voca<=122 )
		{
			if (max <= voca[i])

				max = voca[i];
		}
		else
		{
			printf("영단어만 입력할 수 있습니다.\n프로그램을 종료합니다.");
			break;
		}
	printf("아스키코드 값이 가장 큰 문자는 %c입니다.", max);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	
	char ptr = &ch;
	char* ptr = '66';
//A를 B로 바꿔보자*/
