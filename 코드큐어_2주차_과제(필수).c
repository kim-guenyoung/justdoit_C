//백준 2525
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	scanf("%d %d", &A, &B); //A = 시각(시), B = 시각 (분)
	scanf("%d", &C); //C = 조리되는 시간
	(B += C); //시작시간과 걸리는 시간을 더함

	if (A / 24 < 1) //24시간이 지나면 시간 리셋
			A = A;
	if (B >= 60) //59분이 넘어가면 분 리셋과 동시에 시 +1
		A += 1, B -= 60;

	if (B >= 60, (A + (B + C) / 60) / 24 >= 1) //B와 C 더한 값이 60이 넘고, 그 값을 60으로 나눈 뒤 몫을 A와 더해주었을 때, 1이상이면 A-24(시간 초기화)
		A -= 24;


	if (B + C >= 120)
		A += 1, B -= 60;
	printf("%d %d", A, B); //시간 출력!!
	return 0;
}
//백준 2741
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) //시작 값을 1로 해서 1씩 증가시킴
	printf("%d\n", i); //세로로 출력(5까지)
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	printf("%c", '*');
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char num;
	printf("점수 입력 : ");
	scanf("%c", &num);//입력값 알파벳이니 %c
	switch (num)
	{
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!");
		break; //B 입력하면 C, D 출력 X
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default: //A, B, C, D를 제외한 알파벳 What?
		printf("What?");
	}
	return 0;
}