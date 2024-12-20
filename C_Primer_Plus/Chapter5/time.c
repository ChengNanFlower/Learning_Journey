// 把用分钟表示的时间转换成用小时和分钟转换的时间
#include <stdio.h>
#define ADJUST 60

int main(void)
{
    int hour, minute_1, minute_2;

    printf("Enter minutes: ");
    scanf("%d", &minute_1);

    while (minute_1 > 0)
    {
        hour = minute_1 / ADJUST;
        minute_2 = minute_1 % ADJUST;

        printf("Time in hours and minutes is %d hour and %d minutes\n",
               hour, minute_2);
        printf("Enter next value (<= 0 to quit): ");
        scanf("%d", &minute_1);
    }
    printf("Done!\n");

    return 0;
}