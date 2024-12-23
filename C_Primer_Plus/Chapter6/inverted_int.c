// 倒序打印整数
#include <stdio.h>

int main(void)
{
    int n;
    printf("How many numbers are there?\n");
    scanf("%d", &n);
    printf("Enter numbers: \n");

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int j = n - 1; j >= 0; j--)
    {
        printf("%d ", num[j]);
    }
    printf("\n");

    return 0;
}