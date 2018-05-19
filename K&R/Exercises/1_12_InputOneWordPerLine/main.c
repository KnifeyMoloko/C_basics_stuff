#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == ',' || c == '.' || c == '\\' || c == '/' || c == '?' || c == '!') {
            putchar('\n');
        }
        else
            putchar(c);
    }
}