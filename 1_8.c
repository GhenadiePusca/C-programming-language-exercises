#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, nl, tabs, blanks;

    nl = tabs = blanks = 0;

    while((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == '\t') {
            ++tabs;
        } else if (c == ' ') {
            ++blanks;
        }
    }

    printf("newlines: %d\n", nl);
    printf("tabs: %d\n", tabs);
    printf("blanks: %d\n", blanks);
    return 0;
}
