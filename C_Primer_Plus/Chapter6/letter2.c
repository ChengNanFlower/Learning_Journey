// 嵌套循环打印字母
#include <stdio.h>

// 声明两个函数：用于打印一行字母和计算偏移量
void letter(int n);
int sum(int n);

int main(void)
{
    int height;

    // 提示用户输入金字塔的高度
    printf("Enter a height (max = 6): ");
    scanf("%d", &height);

    // 检查用户输入的高度是否超过允许的最大值
    if (height > 6) // 如果高度超过6，提示错误并退出程序
    {
        printf("Error!\n");
        return 0;
    }

    // 循环打印每一层金字塔
    for (int i = 0; i < height; i++) // 从第0层到第height层
    {
        letter(i);    // 打印第i层的字母
        printf("\n"); // 每层打印完成后换行
    }

    return 0; // 程序正常结束
}

// 打印第n层的字母
void letter(int n)
{
    // 计算当前层字母的起始偏移量
    int num = sum(n);

    // 从起始字母打印当前层的n+1个字母
    for (char i = 'A' + num; i <= 'A' + num + n; i++)
    {
        printf("%c", i);
    }
}

// 计算偏移量：每一层的字母起始位置由前几层的总字母数决定
int sum(int n)
{
    return n * (n + 1) / 2;
}
