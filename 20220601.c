/*#include <stdio.h>
int main(void)
{
	int max = 0;
	int min = 0;
	double sum = 0;
	int score[20][3];
	int i, j;
	int cnt = 0;
	for (i = 0; i < 20; i++)
	{
		cnt++;

		for (j = 0; j < 3; j++)
		{	
			if (j = 1)
			{
				printf("학생 %d의 국어 점수를 입력하세요 : ", cnt);
				scanf_s("%d", &score[i]);
			}

			if (j = 2)
			{
				printf("학생 %d의 수학 점수를 입력하세요 : ", cnt);
				scanf_s("%d", &score[i]);
			}
			if (j = 3)
			{
				printf("학생 %d의 영어 점수를 입력하세요 : ", cnt);
				scanf_s("%d", &score[i]);
			}
			sum += score[i][j];

			if (score[i][j] > max)
				max = score[i][j];
			if (score[i][j] < min)
				min = score[i][j];
			if (cnt == 20)
				printf("평균 : %f", sum / 20);
		}
		printf("최댓값 : %d\n", max);
		printf("최솟값 : %d\n", min);
	}
	return 0;
}*/

#include <stdio.h>
int main(void)
{
	int arr[] = { 100, 200, 300 };
	int* p = NULL;
	p = arr;

	printf("*p + 1의 주소 : %p, *p + 1의 데이터 값 : %d\n", &*p + 1, *p + 1);
	printf("*(p + 1)의 주소 : %p, *(p + 1)의 데이터 값 : %d\n", &*(p + 1), *(p + 1));
	printf("*p++의 주소 : %p, *p++의 데이터 값 : %d\n", &*p++, *p++);//앞에서 후위연산이라 200으로 바뀌었는데 
	printf("(*p)++의 주소 : %p, (*p)++의 데이터 값 : %d", &(*p)++, (*p)++); //*p+1이랑 똑같은 뜻
	//printf("*++p의 주소 : %p, *++p의 데이터 값 : %d", &*++p, **++p);
	//printf("++*p의 주소 : %p, ++*p의 데이터 값 : %d", &*++ * p, *++ * p);
	return 0;
}