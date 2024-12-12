/*这是测试变量n
#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n",*p);
}*/  

/*这是测试字符串
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n",s);
}*/

#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%c",*s);
    printf("%c",*(s+1));
    printf("%c\n",*(s+2));//地址运算
}