// 输出名字长度的简单程序
#include <stdio.h>

int main(void)
{
    char name[51];
    printf("Name = ");
    scanf("%s",name);

    int n = 0;
    while(name[n] != '\0')
    {
        n++;
    }
    printf("%d\n",n);

    return 0;
}