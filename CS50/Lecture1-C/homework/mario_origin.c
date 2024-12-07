#include <stdio.h>
void space(int a);
void hash(int b);

int main(void)
{
    int n;
    do
    {
        printf("Size = ");
        scanf("%d",&n);
    }
    while (n < 1);

    int x = n - 1;
    int y = 1;
    for (int i = 0;i < n;i++)
    {
        space(x);
        hash(y);
        printf("\n");
        x--;
        y++;
    }
    return 0;
}

void space(int a)
{
    for (int i = 0;i < a;i++)
    {
        printf("  ");
    }
}

void hash(int b)
{
    for (int i = 0;i < b;i++)
    {
        printf("# ");
    }
}