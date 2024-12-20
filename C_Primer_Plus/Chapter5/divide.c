// 演示除法
#include <stdio.h>

int main(void)
{
    printf("integer division: 5/4 is %d\n", 5 / 4);
    printf("integer division: 6/3 is %d\n", 6 / 3);
    printf("integer division: 7/4 is %d\n", 7 / 4);
    printf("floating division: 7.0/4.0 is %1.2f\n", 7.0 / 4.0);
    printf("mixed division: 7.0/4 is %1.2f\n\n", 7.0 / 4);

    printf("This is a negative test: -19/5 is %d\n", (-19) / 5); // 趋零截断

    return 0;
}