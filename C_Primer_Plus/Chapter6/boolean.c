// 使用_Bool类型的变量
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    _Bool status;

    printf("Please enter an integer to be summed (q to quit): ");
    status = (scanf("%ld", &num) == 1);

    while (status)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}