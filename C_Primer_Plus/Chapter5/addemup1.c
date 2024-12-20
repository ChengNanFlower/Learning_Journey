// 计算n天里赚了多少钱(等差增长)
#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("Please enter the number of days: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum = sum + n;
        n--;
    }
    printf("You made a total of $%d!\n", sum);

    return 0;
}