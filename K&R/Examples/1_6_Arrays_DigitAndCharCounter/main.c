#include <stdio.h>

/* count digits, whitespace and others */

int main() {

    /* Declarations */
    int c, i, nwhite, nother;
    int ndigit[10]; /* Declare an array ndigit with a size of 10 */

    /* Initializations */

    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;

    /* Main program loop */

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }

    printf("Character count:\n\n");
    printf("Digits:\n");
    for (i = 0; i < 10; i++)
        printf("Digit %d = %d\n", i, ndigit[i]);
    printf("White space characters = %d\n", nwhite);
    printf("Other characters = %d\n", nother);
}