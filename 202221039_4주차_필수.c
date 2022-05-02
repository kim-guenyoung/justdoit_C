#include <stdio.h>

void change_time(int total_sec, int* hour, int* min, int* sec) //change_time에서 포인터 변수 hour, min, sec 만들기
{
	*hour = total_sec / 3600;
	*min = total_sec % 3600 / 60;
	*sec = total_sec % 3600 % 60;
}
int main(void)
{
	int hour, min, sec, total_sec;

	printf("총 초(sec)를 입력 : ");
	scanf_s("%d", &total_sec);

	change_time(total_sec, &hour, &min, &sec); //main 함수에 주소 값 전달

	printf("%d초는 %d시간 %d분 %d초입니다.", total_sec, hour, min, sec);
	return 0;
}