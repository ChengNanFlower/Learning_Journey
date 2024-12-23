// 打印一个整数与其平方、立方
#include <stdio.h>

int main(void)
{
    int upper, lower;

    printf("Enter lower limit of number: ");
    scanf("%d", &lower);
    printf("Enter upper limit of number: ");
    scanf("%d", &upper);

    printf("——————————————————————————————\n");
    printf("|number|    square|      cube|\n");
    for (int i = lower; i <= upper; i++)
    {
        printf("|%6d|%10d|%10d|\n", i, i * i, i * i * i);
    }
    printf("——————————————————————————————\n");

    return 0;
}