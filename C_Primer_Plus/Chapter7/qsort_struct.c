// 使用qsort函数对结构体数组进行排序
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int score;
} Student;


int compare(const void *a, const void *b);

int main(void)
{
    Student students[5] = {
        {"Alice", 90},
        {"Bob", 85},
        {"Cathy", 77},
        {"David", 77},
        {"Eva", 100}
    };
    size_t n = sizeof(students) / sizeof(Student);

    // 调用qsort函数
    qsort(students,n,sizeof(Student),compare);

    for (size_t i = 0; i < n;i++)
    {
        printf("姓名：%s, 分数：%d\n", students[i].name, students[i].score);
    }
    
    return 0;
}

int compare(const void *a, const void *b)
{
    Student *sa = (Student *)a;
    Student *sb = (Student *)b;
    
    return sa->score - sb->score;
}