// 下面的程序将打印出什么内容？
#include <stdio.h>

int main(void)
{
    char num = 'a' - 1;
    char end = 'g';
    while (num++ < end)
    {
        printf("%c\n", num);
    }

    return 0;
}