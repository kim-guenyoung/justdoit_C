/*
{//���� ������ �ǹ�
//�迭 ������ �ǹ� : Ư�� ���� �ű⿡ �ҷ����ڴ� �̷��� �����ؼ� �̷��ǵ�
	//�迭�� �ǹ� : �ּҸ� �ǹ�(���α׷��Ӱ� Ư����ġ�� ����� ������ �� �ְ�) �׷��� �߸� ����ϸ� ũ�� �߸��� ���� ����
*/
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good morning!";//ū ����ǥ�� ����ߴٴ� �� ���ڿ��̶�°ž�.
	printf("�迭 str�� ũ�� : %d\n", sizeof(str));
	printf("�� ���� ������ ��� : %c\n", str[13]); //���⼭�� 0�� �ǹ̰� ��¥ ���ٴ� �ṉ̀� (�̰� ���� �ƴϴ� NULL�̴�)
	printf("�� ���� ���� ��� : %d\n", str[13]); //���� ������ �ϸ� �ƽ�Ű�ڵ��� 0�� ��µɰ���
	//ch[4] = %c�� ��µǸ� �ƹ��͵� ��µ��� �ʴµ� %d�� ����ϸ� �����̴ϱ� �ƽ�Ű�ڵ� 32(������ �ǹ�)�� ��µ� ����

	str[12] = '?';
	printf("���ڿ� ��� : %s\n", str);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char str[] = "Good time";
	printf("�迭 str�� ũ�� :%d\n", sizeof(str)); //10
	printf("���ڿ� ��� : %s\n", str);
	return 0; 
}*/
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[50];
	int idx = 0;
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ� : %s\n", str);

	printf("���� ���� ��� : ");
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

	printf("���ܾ� �Է� : ");
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
	char voca2[100] = { 0 }; //�̰� �����ָ� �ڿ� �̻��� ���� ���� �ʱ�ȭ �ʼ�!!
	char i;
	int len = 0;

	printf("���ܾ� �Է� : ");
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
	char voca[MAX] = { 0 }; //�� �̰� �ʱ�ȭ�� ���ִ� ������ �� �ڿ� �Ÿ� ó�����ֱ� �����̱���
	int i;
	int max = 0;

	printf("���ܾ� �Է� : ");
	scanf("%s", voca);

	for (i = 0; i <= MAX; i++)
		if (65<=voca<=90 || 97<=voca<=122 )
		{
			if (max <= voca[i])

				max = voca[i];
		}
		else
		{
			printf("���ܾ �Է��� �� �ֽ��ϴ�.\n���α׷��� �����մϴ�.");
			break;
		}
	printf("�ƽ�Ű�ڵ� ���� ���� ū ���ڴ� %c�Դϴ�.", max);

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char ch = 'A';
	
	char ptr = &ch;
	char* ptr = '66';
//A�� B�� �ٲ㺸��*/
