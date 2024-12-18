// 看
#include <stdio.h>
#include <float.h>

int main(void)
{
    double a = 1.0 / 3.0;
    float b = 1.0 / 3.0;
    
    printf("FLT_DIG: %d\n",FLT_DIG);
    printf("DBL_DIG: %d\n",DBL_DIG);

    printf("%.6f %.12f %.16f\n",a,a,a);
    printf("%.6f %.12f %.16f\n",b,b,b);

    return 0;
}