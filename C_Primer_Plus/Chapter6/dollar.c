// 阶梯状打印$
#include <stdio.h>

void dollar(int n);

int main(void)
{
    int n;
    printf("Enter height: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        dollar(i);
        printf("\n");
    }

    return 0;
}

void dollar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("$");
    }
}