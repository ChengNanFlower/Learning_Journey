// 显示字符的代码序号
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d\n",ch,ch);

    return 0;
}