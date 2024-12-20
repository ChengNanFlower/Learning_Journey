/* （n++ < 10）该表达式的结束就是一个序列点，
    因此C保证在执行printf()之前递增n       */
#include <stdio.h>

int main(void)
{
    int n = 0;
    while (n++ < 10)
    {
        printf("%d\n", n);
    }

    return 0;
}