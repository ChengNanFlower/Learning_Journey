// 用qsort排列整数
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void)
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    size_t n = sizeof(arr) / sizeof(int);

    // 调用qsort函数
    qsort(arr, n, sizeof(arr[0]), compare);

    printf("排序后数组： ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}