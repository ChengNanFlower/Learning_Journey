// 计算并显示消耗每加仑汽油行驶的英里数，显示小数点后一位数字
#include <stdio.h>
#define VOLUME 3.785
#define DISTANCE 1.609

int main(void)
{
    float miles,gallon;
    printf("Enter the mileage of the trip: ");
    scanf("%f",&miles);
    printf("Enter the amount of petrol consumed: ");
    scanf("%f",&gallon);

    printf("The number of miles per gallon is %.1f\n",miles/gallon);
    printf("The gasoline consumption per 100 km is %.1f liters\n",
    (gallon*VOLUME) / (100*miles*DISTANCE));

    return 0;
}