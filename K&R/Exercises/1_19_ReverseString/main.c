#include <stdio.h>
#include <limits.h>
#define SIZE LINE_MAX

char * getLine ();
char * reverse (char from[]);

int main()
/* Take string from input line by line, reverse and print */
{
    char ending[19] = "***END OF INPUT***";
    while (getLine() != ending)
        printf("%s", reverse(getLine()));

    /*for (int i = SIZE; i >= 0; i--)
        printf("%c", reverse(getLine(limit))[i]);
    */
    return 0;
}

char * getLine ()
{
    /* getline: read a line into s, return s */

    int c, i;
    static char line[SIZE];
    char ending[19] = "***END OF INPUT***";

    for (i = 0; i < SIZE -1 && (c=getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = (char) c;
    }

    if (c == '\n')
    {
        line[i] = (char) c;
        ++i;
    }

    if (c == EOF)
        return ending;

    line[i] = '\0';

    return line;
}

char * reverse (char from[]) {
    int i;
    i = SIZE - 1;

    for (i; i >= 0; i--)
        printf("%c", from[i]);

    return 0;
}
