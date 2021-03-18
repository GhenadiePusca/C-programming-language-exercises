#include <stdio.h>

// Converts Fahrenheit to Celsius
int toCelsius(int fahr);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper) {
        celsius = toCelsius(fahr);
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    } 
}

int toCelsius(int fahr) {
    return 5 * (fahr-32) / 9;
}