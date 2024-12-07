#include <stdio.h>

int main(void)
{
    char *words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%i %i %i %i %i\n",words[0][0],words[0][1],words[0][2],words[0][3],words[0][4]);
}