// 使用嵌套if语句显示一个数的约数
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num; // 待测试的数
    unsigned long div; // 可能的约数
    bool isPrime; //素数标记

    printf("Please enter an integer for analysis (enter q to quit): ");
    while (scanf("%lu",&num) == 1)
    {
        for (div = 2,isPrime = true;(div *div) <= num;div++)
        {
            if ((num % div) == 0)
            {
                if ((div * div) != num)
            }
        }
    }
}