/*#include <stdio.h>
int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num) //return 안해줘도되는 함수니까 void사용!
{
	printf("덧셈 결과 출력 : %d\n", num);
}
int ReadNum(void)
{
	int numm;
	scanf_s("%d", &numm);
	return numm;
}
void HowToUseThisProgram(void) //이런 걸 보고 반환 값도 없고 전달 인자도 없다고 하는거였구나..
{
	printf("두 개의 정수를 입력하시면 덧셈 결과가 출력됩니다.\n");
	printf("자 그럼 두 개의 정수를 입력하세요 : ");
}
int main(void)
{
	int result, num1, num2; //일단 변수 선언
	HowToUseThisProgram(); //어떻게 돌아가는지 설명해주고
	num1 = ReadNum(); //입력받을 숫자를 ReadNum함수로 불러와서 사용하기
	num2 = ReadNum();
	result = Add(num1, num2); 입력 받은 값 더하게 하고
	ShowAddResult(result); //마지막 덧셈 결과 : ~~출력시키기
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
	printf("숫자 2개를 입력하세요 : ");
	scanf_s("%d %d", &num1, &num2);
	big = NumberCompare(num1, num2); //왜 Num1, Num2가 아닌지
	printf("%d와 %d 중 큰 수는 %d입니다.", num1, num2, big);
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
	printf("두 개의 정수 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	if (GetAbs(num1) == GetAbs(num2))
		printf("두 수의 절댓값은 같습니다.\n");
	else
		printf("%d와 %d 중 절댓값이 큰 수는 %d입니다.", num1, num2, AbsCompare(num1, num2));
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
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	printf("입력한 수 중 최댓값은 %d입니다.\n", max(num1, num2, num3));
	printf("입력한 수 중 최솟값은 %d입니다.", min(num1, num2, num3));

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

	printf("섭씨 온도 → 화씨온도 : 1\n화씨 온도 → 섭씨 온도 : 2, (택1)");
	scanf_s("%d", &choice);

	if (choice == 1)
		printf("섭씨 온도를 입력하세요 : ");
	scanf_s("%lf", &temperature);
		printf("섭씨 온도 %lf도는 화씨 온도로 %lf도입니다.", temperature, CelToFah(Cel));

	if (choice == 2)
		printf("화씨 온도를 입력하세요 : ");
	scanf_s("%lf", &Fah);
		printf("화씨 온도 %lf도는 섭씨 온도로 %lf도입니다.", temperature, FahToCel(Fah));

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
	printf("몇 개의 수열을 출력하시겠습니까? : ");
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
		printf("%d번째 반복, 지역변수 num = %d\n", cnt + 1, num);
	} //1번째 반복 1, 2번째 반복 1 3번째 반복 1
	if (cnt == 3)
	{
		int num = 7;
		num++;
		printf("if문 내에 존재하는 지역변수 num= %d", num);
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
		printf("if문 내 지역변수 num : %d\n", num); //17
	}
	printf("main 함수 내 지역변수 num : %d\n", num); //1

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
	printf("num : %d\n", num); //0으로 시작
	Add(3);
	printf("num : %d\n", num); //Add 함수에 의해 3이 됨
	num++;
	printf("num : %d\n", num); //++에 의해 4
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
		printf("입력 : %d : ", i + 1);
		scanf_s("%d", &num);
		printf("누적 : %d\n", AddToTotal(num));
	}
	return 0;
}*/
/*
#include <stdio.h>
void Recursive(int num)
{
	if (num <= 0) //하나씩 줄이다가 0보다 작거나 같아지면 탈출
		return; //return이 이제 탈출한다는 의미도 있군.
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
