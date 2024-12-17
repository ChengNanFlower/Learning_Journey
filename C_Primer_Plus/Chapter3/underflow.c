// 下溢
#include <stdio.h>
#include <float.h> // 包含浮点数范围的宏定义

int main(void) {
    double tiny = 1.0; // 初始化为一个正常数值

    // 逐步减小 tiny 的值，模拟下溢
    while (tiny > 0) {
        tiny /= 10.0; // 每次将 tiny 减小 10 倍
        printf("Current value: %.14e\n", tiny);
    }

    printf("\nThe value has underflowed to 0. Tiny = %.14e\n", tiny);

    // 打印 double 类型的最小正值
    printf("Smallest positive double: %.14e\n", DBL_MIN);

    return 0;
}
