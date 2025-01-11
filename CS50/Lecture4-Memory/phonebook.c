// 写入csv文件
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char name[20], number[30];
    printf("Name: ");
    scanf("%s", name);
    printf("Number: ");
    scanf("%s", number);

    fprintf(file, "%s,%s\n", name, number);

    fclose(file);
    return 0;
}