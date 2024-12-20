// 计算一个数的立方值
#include <stdio.h>

double cube(double n);

int main(void)
{
    double num;

    printf("Enter a number of type of double: ");
    scanf("%lf", &num);
    printf("The cube of this number is %.3f\n", cube(num));

    return 0;
}

double cube(double n)
{
    return (n * n * n);
}