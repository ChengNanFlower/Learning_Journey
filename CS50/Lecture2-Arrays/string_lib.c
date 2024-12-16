// 用string.h的函数获得名字长度
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[51];
    printf("Name = ");
    scanf("%s",name);
    int length = strlen(name);
    printf("%d\n",length);

    return 0;
}