// 体积测量系统
#include <stdio.h>

int main(void)
{
    printf("Enter the number of cup: ");
    float cup;
    scanf("%f",&cup);
    printf("The number of pints is: %.1f\n",cup/2);
    printf("The number of ounces is: %.1f\n",cup*8);
    printf("The number of spoons is: %.1f\n",cup*16);
    printf("The number of teaspoons is: %.1f\n",cup*48);

    return 0;
}