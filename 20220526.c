/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char num1[100] = {0, };
	char num2[100] = {0, };
	int strcmp(const void* num1, const void* num2);

	while(1) //���� ���� ������ �ٽ� �Է¹޴� �ý���!
	{
		printf("���� �� �� �Է�(�ִ� 100�ڸ�), ���� ���� �Է� X : ");
		scanf("%s %s", num1, num2);

		if (strcmp(num1, num2) < 0) //num1 < num2 �̸� ���� ��ȯ
		{
			printf("%s %s", num1, num2);
			break;
		}
		else if (strcmp(num1, num2) > 0) //num1 > num2�̸� ��� ��ȯ
		{
			printf("%s %s", num2, num1);
			break;
		}
		else //num1 == num2�� ��� 0�� ��ȯ
		{
			printf("���� ���ڴ� �Է��� �� �����ϴ�.\n�ٽ� �Է����ּ���\n");
			continue;
		}
	}
	return 0;
}*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;  
	int i;
	int sum = 0;
	scanf("%d", &num);
	getchar(); //scanf �Ἥ ���ڿ� �޾����� ���� getchar ����ؼ� �ޱ�
	for (i = 0; i < num; i++)
	{
		sum += getchar() - '0'; //0���ִ� ������ char�̶� int�� 48��ŭ ���� ���µ� 48�� �ش�Ǵ� �ƽ�Ű�ڵ尡 0�̶�
	}
	printf("%d", sum);
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char voca[1000000];
	int i;
	int max = 0;
	int alphabet[26] = {0};
	char str;
	printf("���ܾ� �Է� : ");
	scanf("%s", voca);

	for (int i = 0; voca[i] != '\0'; i++)
	{
		if (voca[i] >= 'a')
		{
			voca[i] -= 32;
			alphabet[voca[i] - 'A']++;
		}
	}

	int cnt = 0;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] > max) //���⼭ alphabet�� �ִ񰪺��� ũ�� ����ؼ� ����
		{
			max = alphabet[i];
			str = i + 65;
		}
		else if (alphabet[i] == max)
			cnt++;
	}
		if (cnt > 1)
		{
			printf("?");
		}
		else
		{
			printf("%c", str);
		}
	return 0;
}