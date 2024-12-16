// 复制图片
#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc,char *argv[])
{
    FILE *src = fopen(argv[1],"rb"); //打开指定路径的文件以 只读模式（"rb"）访问，返回一个指向该文件的文件指针src。
    FILE *dst = fopen(argv[2],"wb"); //打开或创建指定路径的文件以 写入模式（"wb"）访问，返回一个指向该文件的文件指针dst。

    BYTE b;

    while (fread(&b,sizeof(b),1,src) != 0) //一个个字节读取源文件
    {
        fwrite(&b,sizeof(b),1,dst);// 依次写入到目标文件
    }

    fclose(dst);
    fclose(src);
}