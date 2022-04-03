#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A=7, B=3;
	scanf("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d", A % B);
	return 0;
}

/*#include <stdio.h>
int main(void)
{
	printf("|\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"""\\\n");
	printf("| \"^\"` |\n");
	printf("||_/=\\__|");
	return 0;
}

#include <stdio.h>
int main(void)
{
	int A = 5, B = 8, C = 4;
	int result1, result2;
	result1 = (A + B) % C == ((A % C) + (B % C)) % C; // (좌변) = 13%4 = 1 (우변) = (1+0)%4 = 1, 좌변과 우변이 같으므로 1 출력
	result2 = (A * B) % C == ((A % C) * (B % C) % C); // (좌변) = 40%4 = 0 (우변) = (5*0)%4 = 0, 좌변과 우변이 같으므로 1 출력
	printf("%d\n", result1);
	printf("%d", result2);
	return 0;
}*/