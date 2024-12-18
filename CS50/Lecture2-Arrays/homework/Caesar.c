// 凯撒加密
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int only_digits(char *s);
void rotate(char input[],int k);

char input[101];

int main(int argc,char *argv[])
{
    if (argc ==2 && only_digits(argv[1]))
    {
        int k = atoi(argv[1]);

        printf("plaintext:  ");
        fgets(input,sizeof(input),stdin);
        input[strcspn(input, "\n")] = '\0';  // 去掉换行符

        printf("ciphertext: ");
        int length = strlen(input);
        
        rotate(input,k);
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./bin/Caesar key\n");
        return 1;
    }
}

int only_digits(char *s)
{
    int length = strlen(s);
    for (int i = 0;i < length;i++)
    {
        if (!isdigit(s[i]))
        {
            return 0;
        }
    }
    return 1; //正确返回1
}

void rotate(char input[],int k)
{
    int length = strlen(input);
    for (int i = 0;i < length;i++)
    {
        if (input[i] >= 'a' && input [i] <= 'z')
        {
            input[i] = input[i] - 97;
            printf("%c",(input[i] + k) % 26 + 97);
        }
        else if (input[i] >= 'A' && input [i] <= 'Z')
        {
            input[i] = input[i] - 65;
            printf("%c",(input[i] + k) % 26 + 65);
        }
        else
        {
            printf("%c",input[i]);
        }
    }
}