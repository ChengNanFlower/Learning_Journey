// 与greet.c很像
#include <stdio.h>

int main(int argc,char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    printf("Hello,%s\n",argv[1]);
    return 0; 
}
//有一个命令echo $?，他可以查看状态码