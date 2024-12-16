// “你好”
#include <stdio.h>

int main(void)
{
    char name[11];
    printf("What's your name? ");
    scanf("%10s",name);

    printf("Hello,%s!\n",name);
    return 0;
}