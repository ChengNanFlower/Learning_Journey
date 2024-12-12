#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[10],t[10];
    printf("s: ");
    scanf("%9s",s);
    printf("t: ");
    scanf("%9s",t);

/*  if (strcmp(s,t) == 0)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Different.\n");
    }*/
   printf("%p\n",s);
   printf("%p\n",t);//地址不同
}