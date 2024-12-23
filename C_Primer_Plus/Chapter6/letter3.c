// 嵌套循环打印字母
#include <stdio.h>

int main(void)
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    for (int i = 0; i <= letter - 'A'; i++) // 外层循环处理行
    {
        for (int a = 0; a < letter - 'A' - i; a++)
            printf(" "); // 打印开始空格
        for (int b = 'A'; b <= 'A' + i; b++)
            printf("%c", b); // 升序打印字母
        for (int c = 'A' + i - 1; c >= 'A'; c--)
            printf("%c", c); // 降序打印字母（少）
        for (int a = 0; a < letter - 'A' - i; a++)
            printf(" "); // 打印结束空格

        printf("\n");
    }

    return 0;
}