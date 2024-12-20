// 输入一个整数，打印从该数到比该数大10的所有整数
#include <stdio.h>
#define TEN 10

int main(void)
{
    int num, num2;

    printf("Enter a number: ");
    scanf("%d", &num);
    num2 = num + TEN;
    num--;

    while (num++ < num2)
    {
        printf("%3d\n", num);
    }

    return 0;
}