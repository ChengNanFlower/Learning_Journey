// 替换输入的字母，非字母字符保持不变
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch)) // 判断是否是字符
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);

    return 0;
}