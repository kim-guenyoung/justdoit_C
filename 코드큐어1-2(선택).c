/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long A, B; //100000�̻��� ������ long long ������ ����ߴ�.
	scanf("%lld %lld", &A, &B); //long long�� ���� %lld�� ����Ѵ�. �Է��� ���� �ֱ�
	printf("%lld", (A + B) * (A - B)); //A@B���� ���
	return 0;
}*/
/*�� ����(a, b)�� �Է¹޾�

a�� b���� ũ�� 1��, a�� b���� �۰ų� ������ 0�� ����ϴ� ���α׷��� �ۼ��غ���.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	long long a, b; //a�� b���� ���� ����
	int result; //result = a>b�� ����
	scanf("%lld %lld", &a, &b); //�Է��� ���� �ֱ�
	result = a > b;
	printf("%lld", result); //�ᱣ�� ���
	
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	int result;
	scanf("%d %d", &a, &b);
	result = a != b; //a�� b�� ���� ������ 1���, ������ 0���
	printf("%d", result);

	return 0;
}