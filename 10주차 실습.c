/*#include <stdio.h>

int sum(int n)
{
	int i;
	if (n != 1)
		return n +sum(n-1); //���� ��� 5������ ���� 5 + (1, 2, 3, 4)������ ��
}
int main(void)
{
	int n;
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	printf("%d������ �� : %d", n, sum(n));

	return 0;
}*/

#include <stdio.h>
print_num(int n)
{
	int cnt = 1;
	while (cnt < n)
	{
		printf("%d ", cnt);
		cnt++;
	}
}

int main(void)
{
	int n;
	printf("n�� �Է��ϼ��� : ");
	scanf_s("%d", &n);
	
	printf("%d", print_num(n));

	return 0;
}