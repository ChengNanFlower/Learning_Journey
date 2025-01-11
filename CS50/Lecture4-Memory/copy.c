// 复制并将字符串第一个字母大写
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char s[100];
    printf("s: ");
    scanf("%s", s);

    char *t = malloc(strlen(s) + 1); // 分配内存
    if (t == NULL)                   // t是否存在
    {
        return 1;
    }

    strcpy(t, s); // 复制
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    } // 大写

    printf("%s\n", s);
    printf("%s\n", t);

    free(t); // 释放内存
    return 0;
}