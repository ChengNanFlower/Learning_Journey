// 计算文件的下载时间
#include <stdio.h>

int main(void)
{
    float speed,size;
    printf("Speed: ______Mb/s\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&speed);
    printf("File size: ______MB\b\b\b\b\b\b\b\b");
    scanf("%f",&size);

    printf("At %.2f megabits per second,a file of %.2f megabytes\n",
    speed,size);
    printf("downloads in %.2f seconds.\n",size*8/speed);

    return 0;
}