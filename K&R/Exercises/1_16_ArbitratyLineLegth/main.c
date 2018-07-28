#include <stdio.h>
#include <limits.h>

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main()
/* print the longest input line */
{
    int limit;
    limit = LINE_MAX; /* == 2048 */
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[limit]; /* current input line */
    char longest[limit]; /*longest line saved here */

    /* inits */

    max = 0;

    while ((len = getLine(line, limit)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

    if (max > 0) /* there was a new line */
        printf("\n The longest line is: \n %s \n", longest);
    return 0;
}

int getLine(char s[], int lim)
{
    /* getline: read a line into s, return length */
    int c, i;

    for (i = 0; i < lim -1 && (c=getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = (char) c;
    }

    if (c == '\n')
    {
        s[i] = (char) c;
        ++i;
    }
    s[i] = '\0';
    printf("%s", s);
    return i;
}

    void copy(char to[], char from[])
    {
        /* copy: copy 'from' into 'to'; assume to is big enough */
        int i;

        i = 0;
        while ((to[i] = from[i]) !=  '\0')
            ++i;
    }
