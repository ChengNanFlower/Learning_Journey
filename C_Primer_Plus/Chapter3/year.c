// 把年龄转化为秒数
#include <stdio.h>

int main(void)
{
    float year;
    printf("Enter your age: ");
    scanf("%f",&year);
    printf("The number of seconds is %f\n",year*3.156e7);

    return 0;
}