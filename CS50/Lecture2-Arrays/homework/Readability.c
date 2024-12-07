#include <stdio.h>
#include <string.h>

int Grade(char words[300]);

int main(void)
{
    char words[300];
    printf("Text:");
    fgets(words,300,stdin); //这是为了输入整个句子，scanf函数只能储存空格前。

    int grade = Grade(words);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n",grade);
    }

    return 0;
}

int Grade(char words[300])
{
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
        if (words[c] == 46 || words[c] == 58 || words[c] == 33 || words[c] == 63)
        s++;
    }

    L = 100 * l / word;
    S = 100 * s / word;
    index = 0.0588 * L - 0.296 * S - 15.3;
    return index;
}