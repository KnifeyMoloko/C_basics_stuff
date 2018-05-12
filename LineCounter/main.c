#include <stdio.h>

/* count newlines, tabs and blanks - switch-case version */
main() {
    int c, newlines, tabs, blanks;

    newlines = 0;
    tabs = 0;
    blanks = 0;

    c = getchar();
    while (c != EOF) {
        switch (c) {
            case '\n': ++newlines;
            case '\t': ++tabs;
            case ' ': ++blanks;
            default: 0;
        }
        printf("%d %d %d\n", newlines, tabs, blanks);
        c = getchar();
    }
}