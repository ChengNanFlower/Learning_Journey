#include <stdio.h>

int main(void)
{
    int age;
    printf("How old are you?\n");
    scanf("%d",&age);
    printf("Your age is %d,converted into days is %d\n",age,age*365);

    return 0;
}