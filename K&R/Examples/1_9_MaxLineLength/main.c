#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char s[], int maxline);
void copy(char to[], char from[]);

int main()
/* print the longest input line */
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /*longest line saved here */

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a new line */
        printf("%s", longest);
    return 0;
}

int getLine(char s[], int lim) {
    /* getline: read a line into s, return length */
    int c, i;

    for (i = 0; i < lim -1 && (c=getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

    void copy(char to[], char from[]) {
        /* copy: copy 'from' into 'to'; assume to is big enough */
        int i;

        i = 0;
        while ((to[i] = from[i]) !=  '\0')
            ++i;
    }
