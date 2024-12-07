//这是一个错误示例，但是他很好玩，因为我把0和1调换了位置

#include <stdio.h>

int main(int argc,char *argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 0; //原来是1,报错
    }
    printf("Hello,%s\n",argv[1]);
    return 1;  //原来是0,bingo  
}
//有一个命令echo $?，他可以查看状态码