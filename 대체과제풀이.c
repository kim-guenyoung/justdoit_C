/*#include <stdio.h>
int main(void)
{
	int num;
	int flag = 0;// flag�� ���� �����������ν� ó���� ����ϴ��� �߰��� ����ϴ��� Ȯ��
	printf("���� : ");
	scanf_s("%d", &num);

	if (num % 2 == 0)
	{
		if (flag ==1)
			printf("-");
		printf("(2�� ���)");
	}
	{
		if (num % 3 == 0)
			if flag(!= )
			printf("(3�� ���)");
	}
	if (num % 5 == 0)
		printf("(5�� ���)");

	if (num % 7 == 0)
		printf("(7�� ���)");

	if (num % 9 == 0)
		printf("(9�� ���)");


}*/
//�� ��ȯ�� �ִ� ������ ���־�ߵ�. ���� 5��

#include <stdio.h>
int main(void)
{
	int num;
	printf("�ֻ����� ���� �� :");
	scanf_s("%d", &num);
	int cnt[6] = { 0, };
	for (int i = 0; i < num; i++)
	{
		int r = rand() & 6 + 1;
		cnt[r - 1]++;
	}
	for (int i = 0; i < 6; i++)
	{
		printf("�� : %d : ", i + 1)
	}
}