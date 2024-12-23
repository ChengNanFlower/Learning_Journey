// 创建两个包含8个元素的double类型数组，第二个数组的值设置为第一个数组对应元素的累积之和
#include <stdio.h>

int main(void)
{
    double num1[8], num2[8];
    printf("Enter eight numbers of type double: \n");

    for (int i = 0; i < 8; i++)
    {
        scanf("%lf", &num1[i]);
    }

    num2[0] = num1[0]; // 特殊
    for (int j = 1; j < 8; j++)
    {
        num2[j] = num2[j - 1] + num1[j];
    }

    printf("num1[8]: ");
    for (int m = 0; m < 8; m++)
    {
        printf("%8.2f", num1[m]);
    }
    printf("\n");

    printf("num2[8]: ");
    for (int n = 0; n < 8; n++)
    {
        printf("%8.2f", num2[n]);
    }
    printf("\n");

    return 0;
}