#include <stdio.h>

void smile(int a);

int main(void)
{
    int n = 3,j = 3;
    for (int i = 0;i < 3;i++)
    {
        smile(j);
        printf("\n");
        j--;
    }

    return 0;
}

void smile(int a)
{
    for (int i = 0;i < a;i++)
        printf("Smile!");
}