#include <stdio.h>

void draw(int n);

int main(void)
{
    int height;
    printf("Height: ");
    scanf("%d",&height);
    draw(height);

    return 0;
}

void draw(int n)
{
    //如果输入是0时停止
    if (n <= 0)
        return;
    
    //递归
    draw(n - 1);

    //打印行
    for (int i = 0;i < n;i++)
    {
        printf("# ");
    }
    printf("\n");
}