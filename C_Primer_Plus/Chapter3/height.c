// 输入身高（英寸），转发为厘米
#include <stdio.h>

int main(void)
{
    printf("Enter your height in inches: ");
    double height;
    scanf("%lf",&height);
    printf("Your height is %.2fcm\n",height*2.54);

    return 0;
}