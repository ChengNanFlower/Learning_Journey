// 计算Rabnud博士的朋友数
#include <stdio.h>

int main(void)
{
    int friends = 5;
    int weeks = 0;

    while (1)
    {
        weeks++;
        friends = (friends - weeks) * 2;
        printf("%d weeks ago, Dr.Rabnud has %d friends.\n", weeks, friends);
        if (friends >= 150)
            break;
    }

    return 0;
}