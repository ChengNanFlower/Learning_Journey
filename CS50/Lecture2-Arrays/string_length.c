//实现自定义字符串长度计算函数
#include <stdio.h>

int string_length(char *s);

int main(void)
{
    char name[51];
    printf("Name = ");
    scanf("%50s",name);
    int length = string_length(name);
    printf("%d\n",length);

    return 0;
}

int string_length(char *s)
{
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}