// 重复输入打印平方数
#include <stdio.h>

int sum(int a, int b); // 计算平方和

int main(void)
{
    int lower, upper;
    printf("Enter lower and upper integer limits: ");
    int status = scanf("%d %d", &lower, &upper);

    while (status == 2 && lower < upper)
    {
        printf("The sums of the squares from %d to %d is %d\n",
               lower * lower, upper * upper, sum(lower, upper));

        printf("Enter next set of limits: ");
        status = scanf("%d %d", &lower, &upper);
    }
    printf("Done!\n");

    return 0;
}

int sum(int a, int b)
{
    int sum = 0;

    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            sum += i * i;
        }
    }

    return sum;
}