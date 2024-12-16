// 用ctype.h里的函数将单词全部转发为大写
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char words[51];
    printf("Before: ");
    scanf("%s",words);
    printf("After:  ");
    
    for (int i = 0;i < strlen(words);i++)
    {
        printf("%c",toupper(words[i]));
    }

    printf("\n");
    return 0;
}