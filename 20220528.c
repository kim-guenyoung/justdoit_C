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
			alphabet[voca[i] - 'A']++; //A와 Z사이라면 alphabet값이 나오게 해서 정수화 시켜줌!
		}
		
		else
		{
			printf("영단어만 입력할 수 있습니다.");
			break;
		}
	}

	int cnt = 0;

	for (i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			str = i + 'A'; //최대로 많이 나온 숫자에서 문자의 시작 65를 더해서 아스키코드로 변환시켜주는 것임
		}
		else if (max == alphabet[i])
		{
			cnt++;
		}
	}

	if (cnt > 1)
	{
		printf("?"); //max값이랑 세어준 voca[i]값을 cnt 변수 이용해서 늘려줬는데 이게 하나보다 많으면 ? 출력
	}
	else //처음에 cnt==0이런식으로 해서 출력하게 하려고 했는데 생각해보니까 max값이 커지면서 cnt도 커지니까..
	{
		printf("%c", str);
	}
	return 0;
}