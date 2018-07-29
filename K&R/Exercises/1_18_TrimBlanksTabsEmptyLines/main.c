#include <stdio.h>
#include <limits.h>

int TrimLine();

int main()
/* Remove trailing blanks and tabs, delete entirely blank lines */
{
    while (TrimLine() != 0)
        TrimLine();

    return 0;
}

int TrimLine() {
    /*
     * Run through each line of input (not longer than LINE_MAX though!)
     * deleting any empty lines and removing all trailing blanks and tabs
     * from the input.
     * */

    int c, i, j;
    char output[LINE_MAX]; /* the output char array */
    for (i = 0; i < LINE_MAX - 1 && ((c = getchar()) != EOF && (c != '\n')); i++)
        output[i] = (char) c;

    if (c == '\n') {
        output[i] = (char)c;
        i++;
        output[i] = '\0';
    }

    if (i <= 1) /* An empty line will have a newline and a terminating zero character */
        ;
    else {
        j = i - 1; /* Set j to the length of output, offset by 1 for a newline */

        /* Count down from the end of the output array, checking for blanks or tabs
         * and replacing them with a zero value.
         * */
        while (j > 0 && (output[j] == '\t' || output[j] == ' ')) {
            output[j] = 0;
            j--;
        }

        printf("%s", output);
    }
    if (c == EOF)
        return 0; /* EOF should always be on a newline I think, so no need to check and print */

    return 1;
}
