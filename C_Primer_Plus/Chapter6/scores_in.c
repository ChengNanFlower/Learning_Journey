// 使用循环处理数组
#include <stdio.h>
#define SIZE 20

int main(void)
{
    int sum = 0;
    int scores[SIZE];

    printf("Enter your %d scores: \n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    printf("Sum of scores = %d, average = %.1f\n", sum, (float)sum / SIZE);

    return 0;
}