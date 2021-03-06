#include <stdio.h>

int main()
{
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    for (float fahr = upper; fahr >= lower; fahr -= step)
    {
        float celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    }
}
