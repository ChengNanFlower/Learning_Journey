// 倒序打印字符
#include <stdio.h>

int main(void)
{
    char letter[256];
    int i = 0;

    while (1)
    {
        scanf("%c", &letter[i]);

        if (letter[i] == '\n') // 检测是否是换行符，如果是则跳出循环
            break;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", letter[j]);
    }
    printf("\n");

    return 0;
}