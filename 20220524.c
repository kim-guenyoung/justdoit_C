/*#include <stdio.h>
int main(void)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s\n", i + 1, str);
	}
	return 0;	
}*/
/*
#include <stdio.h>
int main(void)
{
	char str[5];

	fputs("���ڿ��� �Է��� �ּ��� :\n", stdout); //const �� ������ ���� �����͸� �޶�� �� �����μ� �۵��� �ϰ� �����ϱ�
	//stdout : ǥ�� �����(�Է½�Ʈ��)
	fgets(str, sizeof(str), stdin); //size�� �Է��϶� ���̴�
	//stdin �� �⺻���� Ű���� out�� ����� �״ϱ� Ű����� �Է��� �ް� ���ڿ���ŭ 
	//5�� �Ǿ�� �Ǵµ� �������� null�� ������ �Ƹ� 4�������� �޾�������
	puts("�Է��Ͻ� ���ڿ� : ");
	puts(str);//�׳� puts�� �ڿ� ���Ͱ� ����
	//�׷��� �װ� ������ ����帪�� printf���Ŷ�
	fputs("�Է��Ͻ� ���ڿ� : ", stdout); //ǥ�� �Է����� �۵��ϰԲ� ������ �־���!
	fputs(str, stdout);
	return 0;
}*/
/*
#include <stdio.h>

void printArray(int* array);
void resetArray(int(*array)[]);
int* resetArray2(int array[][3]);

int main() {
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    printArray(arr);
    resetArray(arr);
    printArray(arr);

    int(*arr2)[3];
    arr2 = resetArray2(arr);
    printArray(arr2);
    // arr2�� arr1�� �ص� �Ȱ��� ���´�ϴ�

    return 0;
}

void printArray(int* array) {
    // ��� ���� ����Ʈ ���ּ���~
    // ������ ������ �̿��ؼ� ��� ��ҿ� �����ϴ� ����Դϴ�
    for (int i = 0; i < 6; i++) {
        printf("%d\n", *(array + i));
    }
}

void resetArray(int(*array)[3]) {
    // ��� ���� 0���� �ٲ��ּ���~
    // �迭 �����Ϳ� �迭�� ���� �ּҷ� ��� ��ҿ� �����ϴ� ����Դϴ�
    for (int i = 0; i < 6; i++) {
        array[0][i] = 0;
    }
    return;
}

int(*resetArray2(int array[][3])) {
    // ��� ���� 1�� �ٲ��ּ���~
    //�迭 �����͸� �̿��� �����ϴ� ����Դϴ�!
    // https://boongubbang.tistory.com/269

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            array[i][j] = 1;
        }
    }

    return array;
}*/

#include <stdio.h>

int main(void)
{
	int i;
	int start, end, step;
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	printf("start = ");
	scanf_s("%d", &start);
	printf("end = ");
	scanf_s("%d", &end);
	printf("step = ");
	scanf_s("%d", &step);

	for (i = start - 1; i < end; i += step) //�迭�� 0���� �����̴ϱ� 1�� ����. �������� i�� ������Ű�� i�� ����� ����
	{
		if ((start < 1) || (end > 26))
		{
			printf("start�� end�� 1���� 26������ ������ �Է��� �� �ֽ��ϴ�.\n���α׷��� �����մϴ�.");
			break;
		}
		if (step > 25)
		{
			printf("step�� 1���� 25������ ������ �Է��� �� �ֽ��ϴ�.\n���α׷��� �����մϴ�.");
			break;
		}
		printf("%c", str[i]);
	}
	return 0;
}