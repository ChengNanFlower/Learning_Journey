// 字段宽度
#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n------------\n",PAGES);

    printf("*%10d*\n",15123);
    printf("*%10d*\n",123);
    printf("*%10d*\n",77777777);

    return 0;
}