#include <stdio.h>

/* Exercise 1-10 from Kernighan and Ritchie's "The C Programming Language" */

main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            putchar(' ');

            while (( c= getchar()) == ' ')
                ;
            putchar(c);
        }
        else
            putchar(c);
    }
}