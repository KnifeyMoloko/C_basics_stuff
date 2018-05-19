#include <stdio.h>
#define IN 1
#define OUT 0

/* The K&R example program mimicking a basic version of the UNIX wc program */

main() {
    int c, nw, nl, nc, state;

    state = OUT;
    nw = nl = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d   %d    %d\n", nl, nw, nc);
}