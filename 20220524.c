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

	fputs("문자열을 입력해 주세요 :\n", stdout); //const 차 포인터 파일 포인터를 달라는 겨 변수로서 작동을 하고 있으니까
	//stdout : 표준 입출력(입력스트림)
	fgets(str, sizeof(str), stdin); //size를 입력하란 말이다
	//stdin 은 기본으로 키보드 out은 모니터 그니까 키보드로 입력을 받고 문자열만큼 
	//5가 되어야 되는데 마지막에 null값 때문에 아마 4개까지만 받아질거임
	puts("입력하신 문자열 : ");
	puts(str);//그냥 puts는 뒤에 엔터가 쳐짐
	//그래서 그게 불편한 사람드릉ㄴ printf쓰거라
	fputs("입력하신 문자열 : ", stdout); //표준 입력으로 작동하게끔 변수를 넣어줌!
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
    // arr2을 arr1로 해도 똑같이 나온답니다

    return 0;
}

void printArray(int* array) {
    // 모든 값을 프린트 해주세요~
    // 포인터 연산을 이용해서 모든 요소에 접근하는 방법입니다
    for (int i = 0; i < 6; i++) {
        printf("%d\n", *(array + i));
    }
}

void resetArray(int(*array)[3]) {
    // 모든 값을 0으로 바꿔주세요~
    // 배열 포인터와 배열의 시작 주소로 모든 요소에 접근하는 방법입니다
    for (int i = 0; i < 6; i++) {
        array[0][i] = 0;
    }
    return;
}

int(*resetArray2(int array[][3])) {
    // 모든 값을 1로 바꿔주세요~
    //배열 포인터를 이용해 리턴하는 방법입니다!
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

	for (i = start - 1; i < end; i += step) //배열은 0부터 시작이니까 1을 빼줌. 간격으로 i값 증가시키고 i값 출력할 것임
	{
		if ((start < 1) || (end > 26))
		{
			printf("start와 end는 1부터 26까지의 정수만 입력할 수 있습니다.\n프로그램을 종료합니다.");
			break;
		}
		if (step > 25)
		{
			printf("step은 1부터 25까지의 정수만 입력할 수 있습니다.\n프로그램을 종료합니다.");
			break;
		}
		printf("%c", str[i]);
	}
	return 0;
}