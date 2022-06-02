/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char num1[100] = {0, };
	char num2[100] = {0, };
	int strcmp(const void* num1, const void* num2);

	while(1) //같은 수가 나오면 다시 입력받는 시스템!
	{
		printf("정수 두 개 입력(최대 100자리), 같은 숫자 입력 X : ");
		scanf("%s %s", num1, num2);

		if (strcmp(num1, num2) < 0) //num1 < num2 이면 음수 반환
		{
			printf("%s %s", num1, num2);
			break;
		}
		else if (strcmp(num1, num2) > 0) //num1 > num2이면 양수 반환
		{
			printf("%s %s", num2, num1);
			break;
		}
		else //num1 == num2인 경우 0을 반환
		{
			printf("같은 숫자는 입력할 수 없습니다.\n다시 입력해주세요\n");
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
	getchar(); //scanf 써서 문자열 받아주지 말고 getchar 사용해서 받기
	for (i = 0; i < num; i++)
	{
		sum += getchar() - '0'; //0빼주는 이유가 char이랑 int랑 48만큼 차이 나는데 48에 해당되는 아스키코드가 0이라서
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
	printf("영단어 입력 : ");
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
		if (alphabet[i] > max) //여기서 alphabet이 최댓값보다 크면 계속해서 갱신
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