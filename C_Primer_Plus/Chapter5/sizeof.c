// 使用sizeof运算符
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d,n has %zu bytes;all ints have %zu bytes.\n",
            n,sizeof(n),intsize);

    return 0;
}