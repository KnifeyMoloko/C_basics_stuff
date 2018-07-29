#include <stdio.h>
#include <limits.h>

int checkLine(int lim);

int main()
/* print the longest input line */
{
    int limit, c;
    limit = LINE_MAX; /* == 2048 */
    while (checkLine(limit) != 0)
        checkLine(limit);

    return 0;
}

int checkLine(int lim) {
    /*
     * Take a input limit equal to LINE_MAX and run through the input
     * with getchar() as long as you hit a newline or EOF.
     * When EOF, return 0 signaling a legal termination and EOF,
     * otherwise add characters to the output string until you hit newline
     * at which point you check the character count and print if more than
     * 80. After that return 1 to signal that a line was processed but no
     * EOF was encountered.
     * */

    int c, i;
    char output[lim]; /* the output char array */
    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF && (c != '\n')); i++)
        output[i] = (char) c;

    if (c == '\n') {
        output[i] = (char)c;
        i++;
        output[i] = '\0';
    }

    if (i > 80) /* has to be 'larger than' to acount for the nextline, EOF etc. characters */
        printf("%s", output);
    if (c == EOF)
        return 0; /* EOF should always be on a newline I think, so no need to check and print */

    return 1;
}
