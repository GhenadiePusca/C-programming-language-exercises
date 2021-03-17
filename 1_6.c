#include <stdio.h>

int main(int argc, char const *argv[])
{
    // By using terminal, we can see that the comparison
    // will return 0 if Ctrl-D(on Unix) keys combination is used,
    // and 1 otherwise.
    printf("%d", getchar() != EOF);
    return 0;
}
