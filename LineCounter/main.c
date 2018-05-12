#include <stdio.h>

/* count newlines, tabs and blanks - back to if-else structure, works ok */
main() {
    int c, newlines, tabs, blanks;

    newlines = 0;
    tabs = 0;
    blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++newlines;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++blanks;
    }
    printf("%d %d %d\n", newlines, tabs, blanks);
}