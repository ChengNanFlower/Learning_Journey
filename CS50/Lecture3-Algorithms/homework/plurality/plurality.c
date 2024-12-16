// 选票
#include <stdio.h>
#include <string.h>

// 最大候选人数
#define MAX 9

// 候选人有姓名和票数
typedef struct
{
    char *name;
    int votes;
} candidate;

// 候选人数组
candidate candidates[MAX];

// 候选人数目
int candidate_count;

// 函数原型
int vote(char *name);
void print_winner(void);

int main(int argc, char *argv[])
{
    // 检查无效用法
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // 填充候选人数组
    candidate_count = argc - 1;//在vote函数前，已经定义值
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count;
    printf("Number of voters: ");
    scanf("%d",&voter_count);

    // 遍历所有投票者
    for (int i = 0; i < voter_count; i++)
    {
        char name[100];
        printf("Vote: ");
        scanf("%s",name);
        int valid = vote(name); // 第一次调用
        if (valid == 1) // 检查返回值
        {
            printf("Invalid vote.\n");
        }
    }

    // 显示选举获胜者
    print_winner();
}

// 更新新投票的投票总数
int vote(char *name)
{
    for (int i = 0;i < candidate_count;i++)//与人数有关
    {
        if (strcmp(candidates[i].name,name) == 0)
        {
            candidates[i].votes++;
            return 0; //找到返回0
        }
    }
    return 1; //未找到返回1
}

// 打印选举的获胜者
void print_winner(void)
{
    int bigest;
    bigest = candidates[0].votes;
    for (int i = 0;i < candidate_count;i++)//遍历找到最大值
    {
        if (candidates[i].votes > bigest)
        {
            bigest = candidates[i].votes;
        }
        
    }
    for (int k = 0;k < candidate_count;k++)
    {
        if (candidates[k].votes == bigest)
        {
            printf("%s\n",candidates[k].name);//打印所有与最大值相等的name
        }
    }
    return;
}