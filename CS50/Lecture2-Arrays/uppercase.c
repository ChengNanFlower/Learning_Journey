// 将单词全部转发为大写
#include <stdio.h>
#include <string.h>

int main(void)
{
    char words[51];
    printf("Before: ");
    scanf("%s",words);
    printf("After:  ");
    
    for (int i = 0;i < strlen(words);i++)
    {
        if (words[i] >= 'a' && words[i] <= 'z')
        printf("%c",words[i] - ('a' - 'A'));

        else
        printf("%c",words[i]);
    }

    printf("\n");
    return 0;
}