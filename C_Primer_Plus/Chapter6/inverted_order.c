// 倒序打印字母
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    printf("Enter a word:  ");
    scanf("%s", word);
    int length = strlen(word);

    printf("Inverted word: ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");

    return 0;
}