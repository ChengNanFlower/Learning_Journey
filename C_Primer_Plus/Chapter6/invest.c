// 计算投资金额
#include <stdio.h>

int main(void)
{
    double Daphne = 100.0;
    double Deirdre = 100.0;
    int year = 0;

    while (1)
    {
        year++;
        Daphne += 10.0;
        Deirdre *= 1.05;
        if (Deirdre > Daphne)
            break;
    }
    printf("%d years ago,Daphne's money is %f,Deirdre's money is %f\n",
           year, Daphne, Deirdre);

    return 0;
}