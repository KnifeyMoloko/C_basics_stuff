#include <stdio.h>
#include <limits.h>
#define SIZE LINE_MAX

char * getLine ();
char * reverse (char from[]);

int main()
/* Take string from input line by line, reverse and print */
{
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

    for (i = 0; i < SIZE -1 && (c=getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = (char) c;
    }

    if (c == '\n')
    {
        line[i] = (char) c;
        ++i;
    }

    line[i] = '\0';

    return line;
}

char * reverse (char from[]) {
    static char reversed[SIZE];
    int i, j;
    i = SIZE;
    j = 0;

    for (i; i >= 0; i--)
        printf("%c", from[i]);
    //TODO: looks like the terminating zero messes up the reassignment here, I have to make the loop check for it

    printf("%s", reversed);

    return reversed;
}
