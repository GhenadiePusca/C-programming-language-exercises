#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int blankMatched = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (blankMatched == 0) {
                blankMatched = 1;
                putchar(c);
            }
        } else {
            blankMatched = 0;
            putchar(c);
        }  
    }
    return 0;
}