// 使用qsort排列浮点数
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void)
{
    float arr[] = {3.14, 2.71, 0.577, 1.618};
    size_t n = sizeof(arr) / sizeof(float);

    // 调用qsort函数
    qsort(arr, n, sizeof(arr[0]), compare);

    printf("排序后数组： ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}

int compare(const void *a, const void *b)
{
    float fa = *(float *)a;
    float fb = *(float *)b;

    if (fa < fb)
        return -1;
    if (fa > fb)
        return 1;
    return 0;
}