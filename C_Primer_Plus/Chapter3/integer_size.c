// 查看数据类型的占用空间
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("Size of char:          %zu bytes\n", sizeof(char));
    printf("Size of float:         %zu bytes\n", sizeof(float));
    printf("Size of double:        %zu bytes\n", sizeof(double));
    printf("Size of int:           %zu bytes\n",sizeof(int));
    printf("Size of short int:     %zu bytes\n",sizeof(short int));
    printf("Size of long int:      %zu bytes\n",sizeof(long int));// 32位系统是4byte,64位系统是8byte
    printf("Size of long long int: %zu bytes\n",sizeof(long long int));// 无论32还是64都是8byte
    printf("Size of int_least8_t:  %zu bytes.\n",sizeof(int_least8_t));
    printf("Size of uintmax_t:     %zu bytes.\n",sizeof(uintmax_t));

    return 0;
}