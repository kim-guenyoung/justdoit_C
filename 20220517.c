/*#include <stdio.h>
int main(void)
{
	char str[25] = { 'H', 'e', 'l','l', 'o', ',',' ', 'N', 'I', 'C', 'E',' ', 't', 'o', ' ', 'm', 'e', 'e', 't', ' ', 'y', 'o', 'u', '!' , '\0' };
	//원래는 24자가 맞는데, char str[24] = Hello, nice to meet you!를 하게 되면 뒤에 한자가 나오게 되어 NULL 문자를 만들어줌으로써 문자열임을 인지시켜줌!
	int i;
	int cnt = 0;

	printf("문장 : %s\n", str);
	for (i = 0; i <= 24; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cnt++;
			str[i] += 32;
		}
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자수 : %d", cnt); //cnt 변수를 만들어줘서 만약에 대문자에서 소문자로 바뀔 때마다 카운트를 증가시켰음
	
	return 0;
}*/
/*
#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}
int main(void)
{
	int result;
	result = Add(3, 4);
	printf("덧셈결과1 : %d\n", result);
	
	result = Add(5, 8);
	printf("덧셈결과2 : %d\n", result);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int arr[3] = { 10, 20, 30 };
	int* ptr_arr = arr;

	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%d %d %d\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);
	printf("%d\n", sizeof(arr));
	printf("%d", sizeof(ptr_arr));
}*/
/*#include <stdio.h>
int main() {
	int arr[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	printf("배열 인덱스를 이용한 접근\n");
	printf("%d\n", arr[0][0]); //아아 0x10에서 0걸음 가는 거구나~ 자료형에 따라 보폭이 달라지고 int니까 4걸음으로 가는구나
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[0][3]); //연속적으로 담기고 여기서부터 읽으면 부분배열의 0번째 주소
	//결국 0x10의 위치가 되는데 4번째 걸음이니까 40이 출력되는 것임
	printf("%d\n", arr[0][4]);
	printf("%d\n", arr[0][5]);
	printf("\n");
	printf("첫번 째 배열의 주소로 ");
	printf("포인터 연산을 해서 접근\n");
	printf("%d\n", *(arr[0] + 0)); //이게 바로 포인터연산(주소 연산) arr0번째 부분배열을 가리키는데 그니까 0x10을 가리키는 거지
	//0x10에서 +0을 하는데 ptr+n은 n은 실제로 1이 될수도 있고 4가 될수도 있고 자료형에 따라 다르다.
	printf("%d\n", *(arr[0] + 1));
	printf("%d\n", *(arr[0] + 2));
	printf("%d\n", *(arr[0] + 3));
	printf("%d\n", *(arr[0] + 4));
	printf("%d\n", *(arr[0] + 5));
	printf("\n");
	printf("배열 인덱스를 이용한 접근\n");
	printf("%d\n", arr[0][0]);
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[1][0]);
	printf("%d\n", arr[1][1]);
	printf("%d\n", arr[1][2]);
	printf("\n");
	printf("배열 안에 담긴 각 배열의 시작");
	printf("주소로 포인터 연산을 해서 접근\n");
	printf("%d\n", *(arr[0] + 0));
	printf("%d\n", *(arr[0] + 1));
	printf("%d\n", *(arr[0] + 2));
	printf("%d\n", *(arr[1] + 1));
	printf("%d\n", *(arr[1] + 2));
	printf("%d\n", *(arr[1] + 3));
	printf("\n");
	return 0;
}
*/