// 上溢与NaN
#include <stdio.h>
#include <math.h>

int main(void)
{
    float toobig = 3.4e38 * 100.0f;
    float m = 2;
    printf("%e\n",toobig);
    printf("%f\n",asin(m));

    return 0;
}