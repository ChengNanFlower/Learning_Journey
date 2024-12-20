// 转换华氏温度，摄氏温度，开氏温度
#include <stdio.h>

void Temperatures(double n);

int main(void)
{
    double temperature;
    int value = 1;

    printf("Enter a temperature of Fahrenheit: ");
    scanf("%lf", &temperature);

    while (value == 1)
    {
        Temperatures(temperature);
        printf("Now enter the next temperature of Fahrenheit (enter 'q' to quit): ");
        value = scanf("%lf", &temperature);
    }

    return 0;
}

void Temperatures(double n)
{
    printf("Fahrenheit: %7.2f\n", n);
    printf("Celsius:    %7.2f\n", 5.0 / 9.0 * (n - 32.0));
    printf("Kelvin:     %7.2f\n", 5.0 / 9.0 * (n - 32.0) + 273.16);
}