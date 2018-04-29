#include <stdio.h>

/* copy input to output; def no thrills here; 1st version */
int main() {
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}