#include <stdio.h>
#include <ctype.h>
#include <string.h>

int scores(char player[21]);

//这是很关键的一步
int POINT[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    char player1[21],player2[21];
    printf("Player 1: ");
    scanf("%20s",player1);
    printf("Player 2: ");
    scanf("%20s",player2);
    int a = scores(player1);
    int b = scores(player2);
    if (a > b)
    {
        printf("Player 1 wins!");
    }
    else if (a == b)
    {
        printf("Tie!");
    }
    else
    {
        printf("Player 2 wins!");
    }
    printf("\n");
    return 0;
}

int scores(char player[21])
{
    int sum = 0;
    for (int i = 0;i < strlen(player);i++)
    {
        player[i] = toupper(player[i]);
        if (player[i] >='A' && player[i] <= 'Z')
        {
            sum += POINT[player[i] - 'A']; //这一步将字符与具体的数对应起来
        }
    }
    return sum;
}