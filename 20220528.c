#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char voca[1000000];
	int i;
	int alphabet[26] = { 0, };
	int max = 0;
	char str;
	scanf("%s", voca);

	for (i = 0; voca[i] != '\0'; i++)
	{
		if ('A' <= voca[i] <= 'Z')
		{
			voca[i] -= 'a' - 'A';
			alphabet[voca[i] - 'A']++; //A�� Z���̶�� alphabet���� ������ �ؼ� ����ȭ ������!
		}
		
		else
		{
			printf("���ܾ �Է��� �� �ֽ��ϴ�.");
			break;
		}
	}

	int cnt = 0;

	for (i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			str = i + 'A'; //�ִ�� ���� ���� ���ڿ��� ������ ���� 65�� ���ؼ� �ƽ�Ű�ڵ�� ��ȯ�����ִ� ����
		}
		else if (max == alphabet[i])
		{
			cnt++;
		}
	}

	if (cnt > 1)
	{
		printf("?"); //max���̶� ������ voca[i]���� cnt ���� �̿��ؼ� �÷���µ� �̰� �ϳ����� ������ ? ���
	}
	else //ó���� cnt==0�̷������� �ؼ� ����ϰ� �Ϸ��� �ߴµ� �����غ��ϱ� max���� Ŀ���鼭 cnt�� Ŀ���ϱ�..
	{
		printf("%c", str);
	}
	return 0;
}