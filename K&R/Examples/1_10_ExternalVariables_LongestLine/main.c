#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

// EXTERNAL VARIABLE DEFINITIONS
int max;                /* maximum length seen so far */
char line[MAXLINE];     /* current input line */
char longest[MAXLINE];  /* longest line saved here */


// FUNCTION DEFINITIONS
int getLine(void);
int copy(void);

/* print longest input line; specialized version */

int main()
{
    int len;
    // EXTERNAL VARIABLE DECLARATIONS
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = getLine()) > 0)
        if (len > max) {
            max = len;
            copy();
        }

    if (max > 0) // there was a line
        printf("%s", longest);
    return 0;
}

/* getLine: specialized version */

int getLine(void)
{
    int c, i;
    // EXTERNAL VARIABLE DECLARATION
    extern char line[];

    for (i = 0; i < MAXLINE - 1
        && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

/* copy: specialized version */

int copy(void)
{
    int i;
    // EXTERNAL VARIABLE DECLARATIONS
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0') {
        ++i;
    }
    return 0;
}
