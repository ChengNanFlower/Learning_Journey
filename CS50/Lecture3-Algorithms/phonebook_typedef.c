// 利用结构体查找电话簿
#include <stdio.h>
#include <string.h>

// 定义一个结构体类型
typedef struct
{
    char *name;      // 使用指针来存储名字
    char *number;    // 使用指针来存储电话号码
} person;

int main(void)
{
    // 定义一个包含 3 个 person 的数组，使用字符串字面量
    person people[3];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949-468-2750";

    // 获取用户输入
    char Name[10];
    printf("Name = ");
    scanf("%s", Name);

    // 遍历结构体数组，查找匹配的名字
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, Name) == 0)  // 字符串比较
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    // 如果没有找到匹配的名字
    printf("Not found.\n");
    return 1;
}
