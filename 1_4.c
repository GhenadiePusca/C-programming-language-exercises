#include <stdio.h>

int main(int argc, char const *argv[])
{
    float celsius;
    float upper, lower, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    printf("%s\t%s\n", "Celsius", "Fahrenheit");
    while (celsius <= upper) 
    {
        float fahrenheit = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f\t%3.1f\n", celsius, fahrenheit);
        celsius += step;
    }
    
}
