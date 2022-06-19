/*#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL; //p는 int형 배열이다.
	p = arr;

	printf("*p + 1의 주소 : %p\n*p + 1의 데이터 값 : %d\n", *p + 1, *p + 1);
	printf("*(p + 1)의 주소 : %p\n*(p + 1)의 데이터 값 : %d\n", *(p + 1), *(p + 1)); //괄호로 묶어주면
	printf("*p++의 주소 : %p\n*p++의 데이터 값 : %d\n", *p++, *p++);
	printf("(*p)++의 주소 : %p\n(*p)++의 데이터 값 : %d\n", p, *p + 1); //너 100이지....그냥 arr[0] 접근해서 값 가져오고 메모리 값이 증가한거지..
	printf("*++p의 주소 : %p\n*++p의 데이터 값 : %d\n", *++p, *++p); //너 200이지
	printf("++*p의 주소 : %p\n++*p의 데이터 값 : %d\n", p, *p + 1);
	return 0;
}*/
/*
#include <stdio.h>
int Add(int val);
int num = 1;
int main(void)
{
	int num = 5;
	printf("num : %d\n", Add(3));//12
	printf("num : %d\n", num + 9); //14
	return 0;
}
int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}*/
//전역변수가 많아지면 스파게티 코드가 된다.
//그리고 지역변수에 static 선언이 붙으면, 선언된 함수 내에서만 접근이 가능해지고,
//딱 1번 초기화되고, 프로그램 종료될 때까지 메모리 공간에 존재하게 된다.
//재귀함수는 자기 자신을 다시 호출하는 함수를 의미하는데, 그렇기 때문에 복사본을 만들어 실행한다고 생각하면 된다.
//재귀함수는 static이 필요없다!

//영단어 뒤집기
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
		len++;

	for (i = 1; i <= len; i++)
		voca2[len - i] = voca[i - 1];
	printf("%s", voca2);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 7;
	int* pnum;

	pnum = &num;
}*/
/*
int main(void)
{
	int num = 2, i, prime = 2;
	for (i = 0; i < 10; i++)
	{
		while (1)
		{
			if(num % prime == 0)
			{
				if (num == prime)
				{
					printf("%d ", prime);
					num++;
					prime = 2; //prime 2로 계속 초기화
					break;
				}
				else
				{
					num++;
					prime = 2;
				}
			}
			else
				prime++;
		}
		printf("\n");
	}
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr;
	//printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));

	//printf("%d ", *ptr); //11
	//ptr++; //22
	//printf("%d ", *ptr); //22
	//ptr++;
	//printf("%d ", *ptr); //33
	//ptr--;
	//printf("%d ", *ptr); //22
	//ptr--;
	//printf("%d ", *ptr); //11

	printf("%d %d %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2)); //11 22 33
	printf("%d %d %d\n", *(arr + 0), *(arr + 1), *(arr + 2)); // 11 22 33
	printf("%d %d %d\n", ptr[0], ptr[1], ptr[2]); //11 22 33
	printf("%d %d %d\n", arr[0], arr[1], arr[2]); //11 22 33
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s\n", strArr[0]);
	printf("%s\n", strArr[1]);
	printf("%s\n", strArr[2]);
	
	return 0;
}*/

//문제 5. 버블 정렬
/*#include <stdio.h>
int main(void)
{
	int arr[5] = { 4, 3, 5, 1, 2 };
	int i, j;
	int temp;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (arr[j] > arr[j + 1])
				{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				}
		}
	}
	for(i = 0; i<5; i++)
		printf("%d ", arr[i]);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	int binary[20] = { 0, };
	int position = 0;
	
	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = position - 1; i >= 0; i--)
		printf("%d ", binary[i]);
	
	printf("\n");

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int num = 20;
	int binary[20] = { 0, };
	int position = 0;

	while (1)
	{
		binary[position] = num % 2;
		num = num / 2;
		position++;

		if (num == 0)
			break;
	}
	int i;
	for (i = 0; i <= position - 1; i++)
		printf("%d ", binary[i]);

	printf("\n");

	return 0;
}*/
//n개의 정수 입력 후 합 구하기
/*
#include <stdio.h>
int main(void)
{
	int num;
	printf("개수 입력 : ");
	scanf_s("%d", &num);
	int i;
	int sum = 0;

	for (i = 1; i <= num; i++)
	{
		scanf_s("%d", &i);
		sum += i;
	}
	printf("%d ", sum);
	return 0;
}*/
/*
//놀이기구 다시!
#include <stdio.h>
int main(void)
{
	int a = 5, b = 10, c = 23, d = 15, e = 48;
	int rides[5] = { a, b, c, d, e };
	int time[5] = { 2, 2, 3, 2, 1 };
	char sum[5] = { 0, };
	int i, j, temp;

	for (i = 0; i < 5; i++)
	{
		sum[i] = rides[i] + time[i];
	}
	for(i = 0; i<5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (sum[j] > sum[j + 1])
			{
				temp = sum[j];
				sum[j] = sum[j + 1];
				sum[j + 1] = temp;
			}
		}
		if (sum[i] == 7)
			printf("a ");
		if (sum[i] == 12)
			printf("b ");
		if (sum[i] == 17)
			printf("d ");
		if (sum[i] == 26)
			printf("c ");
		if (sum[i] == 49)
			printf("e ");
	}
}
//근데 if문 안쓰고 하고 싶은데, 이건 뭔가 내가 계산한 느낌*/

/*
#include <stdio.h>
int main(void)
{
	int i, j, temp;
	int arr[10] = { 10, 14, 3, 1, 9, 2, 6, 13, 7, 11 };
	printf("정렬 전 : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n정렬 후 : ");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	return 0;
}*/