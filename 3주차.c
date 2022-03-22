/*#include <stdio.h>

int main(void)
{
	printf("Be\rHappy!\bBaby");
	printf("Happy!\nBaby");
	return 0;
}
*/
/*
    '변수'에 대해서 알아봅니다. 변수는 값을 저장하는 메모리 공간입니다. 바구니 같은 것이라고 생각하면 됩니다.
    변수 안에 어떤 자료형의 값을 담을 것인가를 결정하고 미리 '선언'을 해줘야 사용할 수 있습니다.
*/
/*#include <stdio.h>
int main(void) {
    int number;     // 정수형의 숫자를 담아놓을 공간이 필요해서 자료형이 int이며 이름이 number인 변수를 선언했습니다.
    number = 20;    // number라는 메모리 공간 안에 20이라는 정수를 저장합니다.
                    // 여기에서 '='는 '같다'는 뜻이 아니라 '할당한다'는 뜻입니다. 즉, 오른쪽에 있는 값을 왼쪽에 넣어줍니다.
                    // C언어에서 '같다'는 '=='로 표기합니다.
    printf("number=%d\n", number);  // number라는 변수에 있는 값을 출력해 봅시다.
    return 0;
}*/


#include <stdio.h>
int main(void) {
    int number;
    number = 20;    // 변수를 먼저 선언만 한 후, 나중에 값을 넣어줄 수 있습니다.
                    // 이것은 컴파일에러가 나지는 않지만 보통 변수 선언은 앞에 모아서 하고, 사용은 뒤에서 합니다.
    int age = 20;   // 또는 이렇게 선언과 동시에 초기값을 넣어줄 수도 있습니다.
    int num1, num2, num3;       // 자료형이 같으면 이렇게 여러 개의 변수를 한 번에 선언할 수도 있습니다.
    int num4 = 40, num5 = 50;   // 이렇게 여러 개의 변수를 한 번에 선언하며 초기화 할 수도 있습니다.
    int num1;                   // 하지만 같은 이름의 변수를 여러 번 선언할 수는 없습니다.
    printf("number=%d, age=%d, num4=%d, num5=%d\n", number, age, num4, num5);
    return 0;
}