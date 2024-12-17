// 读取浮点数并打印
#include <stdio.h>

int main(void)
{
    double number;
    printf("Enter a floating-point value: ");
    scanf("%lf",&number);
    printf("fixed-point notation: %f\n",number);
    printf("exponential notation: %e\n",number);
    printf("p notation: %a\n",number);

    return 0;
}