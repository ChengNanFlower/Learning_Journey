// 二分查找
#include <stdio.h>

int main(void)
{
    int numbers[13] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
    int left = 0,right = 13;
    int number,mid;
    printf("Number = ");
    scanf("%d",&number);

    while (left <= right) //一定要定义left和right！这是二分法关键
    {
        mid = (left + right) / 2;
        if(number < numbers[mid])
        {
            right = mid - 1; //
        }
        else if(number > numbers[mid])
        {
            left = mid + 1; //
        }
        else if(number == numbers[mid])
        {
            printf("Found %d\n",number);
            return 0;
        }
    }
    printf("Not Found %d\n",number);
    return 1;
}