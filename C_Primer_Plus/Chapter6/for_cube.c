// 使用for循环创建一个立方表
#include <stdio.h>

int main(void)
{
    printf("    n  n cubed\n");
    for (int num = 1; num < 10; num++) // 谨记：第三个表达式在每次循环结束后求值
    {
        printf("%5d %8d\n", num, num * num * num);
    }

    return 0;
}