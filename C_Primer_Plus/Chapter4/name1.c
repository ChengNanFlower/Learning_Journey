// 打印名字
#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s",name);

    int n = strlen(name) + 3;

    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",n,name);

    return 0;
}