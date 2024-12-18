// 输出名和姓的字符数并对齐
#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[20],last[20];
    printf("Enter your first name: ");
    scanf("%s",first);
    printf("Enter your last name: ");
    scanf("%s",last);

    int size1 = strlen(first);
    int size2 = strlen(last);

    printf("%s %s\n%*d %*d\n",first,last,size1,size1,size2,size2);
    printf("%s %s\n%-*d %-*d\n",first,last,size1,size1,size2,size2);

    return 0;
}