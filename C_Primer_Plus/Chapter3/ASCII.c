// 输入一个ASCII值，打印它对应的字符
#include <stdio.h>

int main(void)
{
    int number;
    printf("Please Enter a number: ");
    scanf("%d",&number);
    printf("The corresponding ASCII value is %c\n",number);

    return 0;
}