// 嵌套循环打印字母
#include <stdio.h>

void letter(char n, int m);

int main(void)
{
    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    for (int i = 0; i < ch + 1 - 'A'; i++)
    {
        letter(ch, i);
        printf("\n");
    }

    return 0;
}

void letter(char n, int m)
{
    for (char i = n; i >= n - m; i--)
    {
        printf("%c", i);
    }
}