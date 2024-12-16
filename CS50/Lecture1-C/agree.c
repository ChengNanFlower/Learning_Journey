//用户是否同意
#include <stdio.h>

int main(void)
{
    char answer;
    printf("Do you agree?(Y/n)\n");
    scanf("%c",&answer);
    if (answer == 'Y' || answer == 'y')
    {
        printf("Agreed.\n");
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Error.\n");
    }

    return 0;
}