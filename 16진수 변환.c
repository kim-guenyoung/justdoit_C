/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int X, Y, Z;
	const int Z = X % Y;
	scanf("%d", &X);
	scanf("%d", &Y);

	if (Z = 0)
		printf(X / Y + 'A');
//	printf("��ȯ�� �� ��� : ");
//	printf("%d %d \n", X, Y);
	//Y = X / 16 + X % 16;
//	printf("16������ ��ȯ�ϰ� ���� 10����(X) �Է� : ");
	return 0;
}*/

/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int X, Y, Z;
	const int Z = X % Y;
	scanf("%d", &X);
	scanf("%d", &Y);

	if (Z = 0)
		printf(X / Y + 'A');
//	printf("��ȯ�� �� ��� : ");
//	printf("%d %d \n", X, Y);
	//Y = X / 16 + X % 16;
//	printf("16������ ��ȯ�ϰ� ���� 10����(X) �Է� : ");
	return 0;
}*/

#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[] = "KIM GUEN YOUNG";
	int i;
	for (i = 0; i < strlen(name); i++)
		printf("%d ", name[i]);

	printf("\n");
	for (i = 0; i < strlen(name); i++)
		printf("%X ", name[i]);
}