// 以十进制、八进制、十六进制打印65:
#include <stdio.h>

int main(void)
{
    int a = 65;
    int b = 0101;
    int c = 0x41;
    printf("dec: %d\n",a);
    printf("octal: %d\n",b);
    printf("hex: %d\n",c);

    return 0;
}