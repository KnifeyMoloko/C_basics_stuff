#include <stdio.h>
#define ESC_CH '\\'

/* This is an exercise program from Kernighan and Ritchie's "The C Programming Language", exercise 1-10.
 * It takes standard input and replaces all tabs with "\t", backspaces with "\b" and backslashes with "\\".
 * Nothing much here, just a symbolic constant used for "\\" and some simple checks. Could probably be done
 * with a Switch-Case too.
 * */

int main() {
    int c;

    c = getchar();

    while (c != EOF) {
        if (c == '\t') {
            putchar(ESC_CH);
            putchar('t');
        }

        if (c == '\b') {
            putchar(ESC_CH);
            putchar('b');
        }

        if (c == '\\') {
            putchar(ESC_CH);
            putchar(ESC_CH);
        }

        else {
            putchar(c);
        }

        c = getchar();
    }
}