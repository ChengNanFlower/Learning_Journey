// 多少年后会取完卡里的钱？
#include <stdio.h>

int main(void)
{
    int year = 0;
    double money = 100.0;

    while (1)
    {
        year++;
        money *= 1.08;
        money -= 10;
        if (money <= 0)
            break;
    }
    printf("The year is %d\n", year);

    return 0;
}