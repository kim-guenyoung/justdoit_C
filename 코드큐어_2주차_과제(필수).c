//���� 2525
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	scanf("%d %d", &A, &B); //A = �ð�(��), B = �ð� (��)
	scanf("%d", &C); //C = �����Ǵ� �ð�
	(B += C); //���۽ð��� �ɸ��� �ð��� ����

	if (A / 24 < 1) //24�ð��� ������ �ð� ����
			A = A;
	if (B >= 60) //59���� �Ѿ�� �� ���°� ���ÿ� �� +1
		A += 1, B -= 60;

	if (B >= 60, (A + (B + C) / 60) / 24 >= 1) //B�� C ���� ���� 60�� �Ѱ�, �� ���� 60���� ���� �� ���� A�� �����־��� ��, 1�̻��̸� A-24(�ð� �ʱ�ȭ)
		A -= 24;


	if (B + C >= 120)
		A += 1, B -= 60;
	printf("%d %d", A, B); //�ð� ���!!
	return 0;
}
//���� 2741
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) //���� ���� 1�� �ؼ� 1�� ������Ŵ
	printf("%d\n", i); //���η� ���(5����)
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
	printf("���� �Է� : ");
	scanf("%c", &num);//�Է°� ���ĺ��̴� %c
	switch (num)
	{
	case 'A':
		printf("best!!!");
		break;
	case 'B':
		printf("good!");
		break; //B �Է��ϸ� C, D ��� X
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default: //A, B, C, D�� ������ ���ĺ� What?
		printf("What?");
	}
	return 0;
}