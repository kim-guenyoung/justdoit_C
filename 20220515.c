/*#include <stdio.h>
int main(void)
{
    int a, b, n;
    int i, j = 0;

    printf("a b n �Է� : ");
    scanf_s("%d %d %d", &a, &b, &n);

    printf("(�Ҽ�)");
    
    for (i = a; i <= b; i++)
    {
       // for(j = a; j< i; j++)
            if (is_prime(i) == 1) //1�� ��ȯ�Ǹ� �Ҽ���� �ǵ�
            {

                if (j % n == 0) //�� �ٿ� n���� ���
                    printf("\n");
                j++;
                printf("%3d", i);
                
            }
    }
    return 0;
}

int is_prime(int num)
{
    int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0; //�Է��� ���ڰ� �Ҽ����� Ȯ���ϰ� �Ҽ��� �ƴϸ� 0
    }
    return 1; //�Ҽ��� 1 ��ȯ
}*/

#include <stdio.h>
int main(void)
{
    int num, i = 0;
    int x, y;
    int n = 0;
    printf("�� �ٿ� �� �ܾ� ����ұ��? ");
    scanf_s("%d", &num);

    for (x = 2; x <= 9; x++)
    {
        printf("\n%d��\n", x);
        for (y = 1; y <= 9; y++) //��
            printf("%d x %d = %d\n", x, y, x * y);
    }

}