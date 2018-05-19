#include <stdio.h>

/* copy input to output; def no thrills here; 1st version */
int main() {
    int c; /* we sue int here since EOF is larger than char */

    while ((c = getchar()) != EOF) { /* note the parenthesis here as '!=' has precedence over '=' */
        putchar(c);
    }
}