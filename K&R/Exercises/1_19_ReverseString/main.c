#include <stdio.h>
#include <limits.h>
#define SIZE LINE_MAX

int fetchLine (int limit);
int reverseLine (char line[], int limit);

int main()
/* Take string from input line by line, reverse and print */
{
    /* A while loop tied to the return values of fetchLine
     * so we can tell if EOF was hit == return 1 from
     * fetchLine.
     * */

    while (fetchLine(SIZE) != 1)
        ;
    return 0;
}

int fetchLine (int limit) {
    /* retrieves a line from input, one character at a time
     * and calls reverseLine on each of the lines, then
     * returns 0 until it hits EOF, at which point it
     * return 1
     * */

    int i, c;
    char inputArray[limit];
    i = 0;

    /* Add chars to inputArray until nextline or EOD */
    while ((c = getchar()) != EOF && c != '\n') {
        inputArray[i] = c;
        i++;
    }
    /* If nextline, append the inputAray, add a termination char and call
     * reverseLine on the array, else return 1 to terminate the program. */
    if (c == '\n') {
        inputArray[i] = c;
        i++;
        inputArray[i] = '\0';
        reverseLine(inputArray, i);
        return 0;
    }
    else
        return 1;
}

int reverseLine (char line[], int limit) {
    /* Takes line array and int limit as parameters, uses the limit
     * as boundary for a for loop that decrements from limit, adding
     * chars to a 'reversed' array, then prints the 'reversed' array */

    int i,j;
    char reversed[limit];
    for (i = limit - 2, j = 0; i >= 0; i--, j++)
        /* -2 offset for nextline and termination chars at the end */
        reversed[j] = line[i];
    reversed[j] = '\n';
    reversed[j+1] = '\0';
    printf("%s", reversed);
    return 0;
}
