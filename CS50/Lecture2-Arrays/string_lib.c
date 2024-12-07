#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[51];
    printf("Name = ");
    scanf("%s",name);
    int length = strlen(name);
    printf("%d\n",length);

    return 0;
}