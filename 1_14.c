#include <stdio.h>

#define ASCII_TOTAL_CHARS 128 // max number of chars

int main(int argc, char const *argv[])
{
    // Initialize histogram
    int histogram[ASCII_TOTAL_CHARS];
    for(int i = 0; i < ASCII_TOTAL_CHARS; i++) {
        histogram[i] = 0;
    }

    // Populate histogram
    int c;
    while ((c = getchar()) != EOF)
    {
        histogram[c] += 1;
    }

    // Display histogram
    putchar('\n');
    for(int i = 0; i < ASCII_TOTAL_CHARS; i++) {
        if (histogram[i] == 0) continue;

        putchar(i);
        for(int c = 0; c < histogram[i]; c++) {
            putchar('|');
        }
        putchar('\n');
    }
    
    return 0;
}
