// 更合理的选票
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// 最多选民和候选人
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// 偏好[i][j]是选民i的第j个偏好
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// 候选人有姓名、得票数、淘汰状态
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// 候选人名单
candidate candidates[MAX_CANDIDATES];

// 选民和候选人人数
int voter_count;
int candidate_count;

// 函数原型
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // 检查无效使用
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // 填充候选人数组
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // 继续查询投票
    for (int i = 0; i < voter_count; i++)
    {

        // 查询每个排名
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // 记录投票，除非无效
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // 继续举行决选，直到出现获胜者
    while (true) //一直运行，除非被break
    {
        // 计算剩余候选人的得票数
        tabulate();

        // 检查选举是否获胜
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // 淘汰最后一名候选人
        int min = find_min();
        bool tie = is_tie(min);

        // 如果打平，则所有人都赢
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // 淘汰任何拥有最低票数的人
        eliminate(min);

        // 将投票计数重置为零
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// 如果投票有效，则记录prefence
bool vote(int voter, int rank, string name)
{
    if (voter < voter_count && rank < candidate_count)
    {
        for (int i = 0;i < candidate_count;i++)
        {
            if (strcmp(candidates[i].name,name) == 0)
            {
                preferences[voter][rank] = i;
                return true;//break
            }
        }
    }
    return false;
}

// 将未被淘汰的候选人的选票制成表格
void tabulate(void)
{
    for (int i = 0;i < voter_count;i++)
    {
        for (int j = 0;j < candidate_count;j++)
        {
            if (!candidates[preferences[i][j]].eliminated)
            {
                candidates[preferences[i][j]].votes++;
                break;
            }
        }
    }
    return;
}

// 打印选举的获胜者（如果有的话）
bool print_winner(void)
{
    for (int i = 0;i < candidate_count;i++)
    {
        if (candidates[i].votes > (voter_count / 2))
        {
            printf("%s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}

// 返回剩余候选人拥有的最低票数
int find_min(void)
{
    int min = candidates[0].votes;
    for (int i = 0;i < candidate_count;i++)
    {
        if (!candidates[i].eliminated && (candidates[i].votes < min))
        {
            min = candidates[i].votes;
        }
    }
    return min;
}

// 如果所有候选人的选举结果相同，则返回 true，否则返回 false
bool is_tie(int min)
{
    for (int i = 0;i < candidate_count;i++)
    {
        if (!candidates[i].eliminated && candidates[i].votes != min)
        {
            return false;
        }
    }
    return true;
}

// 淘汰最后一名的候选人（或多个候选人）
void eliminate(int min)
{
    for (int i = 0;i < candidate_count;i++)
    {
        if (candidates[i].votes == min)
        {
            candidates[i].eliminated = true;// 标记淘汰
        }
    }
    return;
}
