// 转化夸脱水的水分子数目
#include <stdio.h>

int main(void)
{
    printf("Enter quart of water: ");
    double quart;
    scanf("%lf",&quart);
    printf("The number of water molecules is %f\n",quart*950/3e-23);

    return 0;
}