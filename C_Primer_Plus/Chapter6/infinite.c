// 计算两个无限序列的总和，并与用户交互式输入
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float formula1 = 0, formula2 = 0;

    printf("Enter a specified number of times: ");
    scanf("%d", &n);

    for (int i = 1.0; i <= n; i++) // 公式1
    {
        formula1 += 1.0 / i;
    }

    for (int j = 1.0; j <= n; j++)
    {
        formula2 += 1.0 / (j * pow(-1.0, j + 1));
    }
    printf("The result of formula1 is %f\n", formula1);
    printf("The result of formula2 is %f\n", formula2);
    printf("The sum of these numbers is %f\n", formula1 + formula2);

    return 0;
}