/*#include <stdio.h>
int main(void)
{
	char str[25] = { 'H', 'e', 'l','l', 'o', ',',' ', 'N', 'I', 'C', 'E',' ', 't', 'o', ' ', 'm', 'e', 'e', 't', ' ', 'y', 'o', 'u', '!' , '\0' };
	//������ 24�ڰ� �´µ�, char str[24] = Hello, nice to meet you!�� �ϰ� �Ǹ� �ڿ� ���ڰ� ������ �Ǿ� NULL ���ڸ� ����������ν� ���ڿ����� ����������!
	int i;
	int cnt = 0;

	printf("���� : %s\n", str);
	for (i = 0; i <= 24; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cnt++;
			str[i] += 32;
		}
	}
	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���ڼ� : %d", cnt); //cnt ������ ������༭ ���࿡ �빮�ڿ��� �ҹ��ڷ� �ٲ� ������ ī��Ʈ�� ����������
	
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
	printf("�������1 : %d\n", result);
	
	result = Add(5, 8);
	printf("�������2 : %d\n", result);
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
	printf("�迭 �ε����� �̿��� ����\n");
	printf("%d\n", arr[0][0]); //�ƾ� 0x10���� 0���� ���� �ű���~ �ڷ����� ���� ������ �޶����� int�ϱ� 4�������� ���±���
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[0][3]); //���������� ���� ���⼭���� ������ �κй迭�� 0��° �ּ�
	//�ᱹ 0x10�� ��ġ�� �Ǵµ� 4��° �����̴ϱ� 40�� ��µǴ� ����
	printf("%d\n", arr[0][4]);
	printf("%d\n", arr[0][5]);
	printf("\n");
	printf("ù�� ° �迭�� �ּҷ� ");
	printf("������ ������ �ؼ� ����\n");
	printf("%d\n", *(arr[0] + 0)); //�̰� �ٷ� �����Ϳ���(�ּ� ����) arr0��° �κй迭�� ����Ű�µ� �״ϱ� 0x10�� ����Ű�� ����
	//0x10���� +0�� �ϴµ� ptr+n�� n�� ������ 1�� �ɼ��� �ְ� 4�� �ɼ��� �ְ� �ڷ����� ���� �ٸ���.
	printf("%d\n", *(arr[0] + 1));
	printf("%d\n", *(arr[0] + 2));
	printf("%d\n", *(arr[0] + 3));
	printf("%d\n", *(arr[0] + 4));
	printf("%d\n", *(arr[0] + 5));
	printf("\n");
	printf("�迭 �ε����� �̿��� ����\n");
	printf("%d\n", arr[0][0]);
	printf("%d\n", arr[0][1]);
	printf("%d\n", arr[0][2]);
	printf("%d\n", arr[1][0]);
	printf("%d\n", arr[1][1]);
	printf("%d\n", arr[1][2]);
	printf("\n");
	printf("�迭 �ȿ� ��� �� �迭�� ����");
	printf("�ּҷ� ������ ������ �ؼ� ����\n");
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