#include <stdio.h>

/* count input lines ver 0.2 - more sensible print call */
main() {
    int c, nl;

    nl = 0;
    c = getchar();

    while (c != EOF) {
        if (c == '\n') {
            ++nl;
            printf("%d\n", nl);
        }
        c = getchar();
    }
}