// 将天数转化为周数和日期
#include <stdio.h>

int main(void)
{
    int day, week, day2;

    printf("Enter days: ");
    scanf("%d", &day);
    
    while (day > 0)
    {
        week = day / 7;
        day2 = day % 7;

        printf("%d days are %d weeks, %d days.\n", day, week, day2);
        printf("Enter next value (<= 0 to quit):");
        scanf("%d", &day);
    }
    printf("Done!\n");

    return 0;
}