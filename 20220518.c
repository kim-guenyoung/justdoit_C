/*#include <stdio.h>
int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num) //return �����൵�Ǵ� �Լ��ϱ� void���!
{
	printf("���� ��� ��� : %d\n", num);
}
int ReadNum(void)
{
	int numm;
	scanf_s("%d", &numm);
	return numm;
}
void HowToUseThisProgram(void) //�̷� �� ���� ��ȯ ���� ���� ���� ���ڵ� ���ٰ� �ϴ°ſ�����..
{
	printf("�� ���� ������ �Է��Ͻø� ���� ����� ��µ˴ϴ�.\n");
	printf("�� �׷� �� ���� ������ �Է��ϼ��� : ");
}
int main(void)
{
	int result, num1, num2; //�ϴ� ���� ����
	HowToUseThisProgram(); //��� ���ư����� �������ְ�
	num1 = ReadNum(); //�Է¹��� ���ڸ� ReadNum�Լ��� �ҷ��ͼ� ����ϱ�
	num2 = ReadNum();
	result = Add(num1, num2); �Է� ���� �� ���ϰ� �ϰ�
	ShowAddResult(result); //������ ���� ��� : ~~��½�Ű��
	return 0;
}*/
/*
#include <stdio.h>
int NumberCompare(int Num1, int Num2)
{
	Num1 > Num2 ? Num1 : Num2;
}

int main(void)
{
	int num1, num2, big;
	printf("���� 2���� �Է��ϼ��� : ");
	scanf_s("%d %d", &num1, &num2);
	big = NumberCompare(num1, num2); //�� Num1, Num2�� �ƴ���
	printf("%d�� %d �� ū ���� %d�Դϴ�.", num1, num2, big);
	return 0;
}*/
/*
#include <stdio.h>

int GetAbs(int num)
{
	if (num >= 0)
		return num;
	else
		return -num;
}
int AbsCompare(int num1, int num2)
{
	if (GetAbs(num1) > GetAbs(num2))
		return num1;
	else if (GetAbs(num1) == GetAbs(num2))
		return 0;
	else
		return num2;
}

int main(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

	if (GetAbs(num1) == GetAbs(num2))
		printf("�� ���� ������ �����ϴ�.\n");
	else
		printf("%d�� %d �� ������ ū ���� %d�Դϴ�.", num1, num2, AbsCompare(num1, num2));
	return 0;
}*/

/*#include <stdio.h>
int max(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3) ? num1 : num3;
	else
		return (num2 > num3) ? num2 : num3;
}

int min(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3) ? num1 : num3;
	else
		return (num2 < num3) ? num2 : num3;
}

int main(void)
{
	int num1, num2, num3;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("�Է��� �� �� �ִ��� %d�Դϴ�.\n", max(num1, num2, num3));
	printf("�Է��� �� �� �ּڰ��� %d�Դϴ�.", min(num1, num2, num3));

	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	int i;
	char str[20] = { 'A', 'b', 's', 'e', 'c', 's', 'e', 't', 'r' };
	for (i = 0; i <= 20; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	}
	printf("%s", str);
	
	return 0;
}*/

/*
#include <stdio.h>
double CelToFah(Cel)
{
	double Fah;
	Fah = 1.8 * Cel + 32;
	return Fah;
}

double FahToCel(Fah)
{
	double Cel;
	Cel = (Fah - 32) / 1.8;
	return Cel;
}
int main(void)
{
	double Cel = 0, Fah = 0;
	double temperature;
	int choice;

	printf("���� �µ� �� ȭ���µ� : 1\nȭ�� �µ� �� ���� �µ� : 2, (��1)");
	scanf_s("%d", &choice);

	if (choice == 1)
		printf("���� �µ��� �Է��ϼ��� : ");
	scanf_s("%lf", &temperature);
		printf("���� �µ� %lf���� ȭ�� �µ��� %lf���Դϴ�.", temperature, CelToFah(Cel));

	if (choice == 2)
		printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf_s("%lf", &Fah);
		printf("ȭ�� �µ� %lf���� ���� �µ��� %lf���Դϴ�.", temperature, FahToCel(Fah));

		return 0;
}*/
/*
#include <stdio.h>
void fibonacci(int number)
{
	int i, f1 = 0, f2 = 1, f3;
	if (number == 1)
		printf("%d", f1);
	else
		printf("%d %d", f1, f2);

	for (i = 0; i <= number - 2; i++)
	{
		f3 = f1 + f2;
		printf(" %d ", f3);
		f1 = f2;
		f2 = f3;
	}
}
int main(void)
{
	int num;
	printf("�� ���� ������ ����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &num);
	fibonacci(num);
	return 0;
}
*/
/*
#include <stdio.h>

int SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num : %d\n", num);
	return 0;
}

int SImpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2 : %d %d\n", num1, num2);
	return 0;
}

int main(void)
{
	int num = 17;
	simpleFuncOne(); //11
	simpleFuncTwo(); //21 29
	printf("main num : %d\n", num); ///17

	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int cnt;

	for (cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num = %d\n", cnt + 1, num);
	} //1��° �ݺ� 1, 2��° �ݺ� 1 3��° �ݺ� 1
	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("if�� ���� �����ϴ� �������� num= %d", num);
	}//8
	return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
	int num = 1;
	
	if (num == 1)
	{
		int num = 7;
		num += 10;
		printf("if�� �� �������� num : %d\n", num); //17
	}
	printf("main �Լ� �� �������� num : %d\n", num); //1

	return 0;
}*/

/*
#include <stdio.h>
int num;

void Add(int val)
{
	num += val;
}

int main(void)
{
	printf("num : %d\n", num); //0���� ����
	Add(3);
	printf("num : %d\n", num); //Add �Լ��� ���� 3�� ��
	num++;
	printf("num : %d\n", num); //++�� ���� 4
	return 0;

}*/
/*
#include <stdio.h>

int Add(int val)
{
	int num = 9;
	num += val;
	return num;
}
int main(void)
{
	int num = 5;
	printf("num : %d\n", Add(3));//12
	printf("num : %d\n", num + 9); //14
	return 0;
}*/
/*
#include <stdio.h>

void SimpleFunc(void)
{
	static int num1 = 0;
	int num2 = 0;
	num1++, num2++; //1, 1 // 2, 1 // 3, 1
	printf("static : %d, local : %d\n", num1, num2);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
	return 0;
}*/
/*
#include <stdio.h>

int AddToTotal(int num)
{
	static int total = 0; 
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է� : %d : ", i + 1);
		scanf_s("%d", &num);
		printf("���� : %d\n", AddToTotal(num));
	}
	return 0;
}*/
/*
#include <stdio.h>
void Recursive(int num)
{
	if (num <= 0) //�ϳ��� ���̴ٰ� 0���� �۰ų� �������� Ż��
		return; //return�� ���� Ż���Ѵٴ� �ǹ̵� �ֱ�.
	printf("Recursive call! %d\n", num);
	Recursive(num-1);
}
int main(void)
{
	Recursive(3);
	return 0;
}*/
/*
#include <stdio.h>

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1! = %d\n", Factorial(1));
	printf("2! = %d\n", Factorial(2));
	printf("3! = %d\n", Factorial(3));
	printf("4! = %d\n", Factorial(4));
	printf("5! = %d\n", Factorial(5));
	printf("6! = %d\n", Factorial(6));
	printf("7! = %d\n", Factorial(7));
	return 0;
}*/

#include <stdio.h>
