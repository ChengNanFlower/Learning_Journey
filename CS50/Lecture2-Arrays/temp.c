#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char words[300];
    printf("Text : ");
    fgets(words,300,stdin); 
    int index;
    float L,S;
    float l = 0,s = 0,word = 0;
    int counter = strlen(words) - 1;

    for (int a = 0;a < counter;a++) //单词数
    {
        if (words[a] == 32)
        word++;
    }
    word = word + 1;

    for (int b = 0;b < counter;b++) //字母个数
    {
        if ((words[b] >= 'A' && words[b] <= 'Z') || (words[b] >= 'a' && words[b] <= 'z'))
        l++;
    }

    for (int c = 0;c < counter;c++) //句子个数
    {
        if (words[c] == 46)
        s++;
    }
    printf("counter = %d,l = %.2f,s = %.2f\n",counter,l,s);

    L = 100 * l / word;
    S = 100 * s / word;
    index = 0.0588 * L - 0.296 * S - 15.3;
    printf("L = %.2f,S = %.2f,index = %d\n",L,S,index);
}