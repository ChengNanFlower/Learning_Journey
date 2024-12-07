#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"Carter","David","John"};
    char *numbers[] = {"+1-617-495-1000","+1-617-495-1000","+1-949-468-2750"};
    char Name[10];
    printf("Name = ");
    scanf("%s",Name);
    for (int i = 0;i < 3;i++)
    {
        if (strcmp(names[i],Name) == 0)
        {
            printf("Found %s\n",numbers[i]);
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}