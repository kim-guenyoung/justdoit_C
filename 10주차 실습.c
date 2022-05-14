/*#include <stdio.h>

int sum(int n)
{
	int i;
	if (n != 1)
		return n +sum(n-1); //예를 들어 5까지의 합은 5 + (1, 2, 3, 4)까지의 합
}
int main(void)
{
	int n;
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	printf("%d까지의 합 : %d", n, sum(n));

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
	printf("n을 입력하세요 : ");
	scanf_s("%d", &n);
	
	printf("%d", print_num(n));

	return 0;
}