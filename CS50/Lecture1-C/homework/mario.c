// 打印mario砖块
#include <stdio.h>

void hash(int m,int i);

int main(void)
{
    int n;
    do
    {
        printf("Size = ");
        scanf("%d",&n);
    }
    while (n < 1);
    
    for (int i = 0;i < n;i++)
    {
        hash(n,i);
    }
    return 0;
}

void hash(int m,int i)
{
    for (int a = 0;a < m - 1 - i;a++)
    {
        printf("  ");
    }
    for (int b = 0;b < i + 1;b++)
    {
        printf("# ");
    }
    printf("\n");
}