#include <stdio.h>

void change_time(int total_sec, int* hour, int* min, int* sec) //change_time���� ������ ���� hour, min, sec �����
{
	*hour = total_sec / 3600;
	*min = total_sec % 3600 / 60;
	*sec = total_sec % 3600 % 60;
}
int main(void)
{
	int hour, min, sec, total_sec;

	printf("�� ��(sec)�� �Է� : ");
	scanf_s("%d", &total_sec);

	change_time(total_sec, &hour, &min, &sec); //main �Լ��� �ּ� �� ����

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.", total_sec, hour, min, sec);
	return 0;
}