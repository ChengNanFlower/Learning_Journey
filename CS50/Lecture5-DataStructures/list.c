#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    // 创建链表
    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // 释放已分配的内存并退出
            while (list != NULL)
            {
                node *temp = list;
                list = list->next;
                free(temp);
            }
            return 1;
        }

        n->number = number;
        n->next = list; // list 初始为 NULL，逐步构建链表
        list = n;
    }

    // 打印链表
    printf("Linked list contents:\n");
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // 释放链表内存
    while (list != NULL)
    {
        node *temp = list; // 保存当前节点
        list = list->next; // 移动到下一个节点
        free(temp);        // 释放当前节点
    }

    return 0;
}
