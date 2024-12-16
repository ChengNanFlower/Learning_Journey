// 遍历数组查找数字
#include <stdio.h>

int main(void)
{
    int numbers[] = {1,2,3,4,5,6,7,8,9,10,21,22,23,25,616,354,50,214,520,115};
    int Number;
    printf("Number = ");
    scanf("%d",&Number);

    for (int i = 0;i < 20;i++)
    {
        if (numbers[i] == Number)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;   
}