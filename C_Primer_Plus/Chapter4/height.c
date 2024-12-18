// 把厘米身高转化为厘米
#include <stdio.h>

int main(void)
{
    float height;
    char name[20];
    printf("What's your name?\n");
    scanf("%s",name);
    printf("How tall are you? ___cm\b\b\b\b\b");
    scanf("%f",&height);

    printf("%s,you are %.2fm tall\n",name,height/100);

    return 0;
}