#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 1909 /* the length of the longest published english word */

/* A program based of off a wc knockoff program. Produces a histogram of the
 * lengths of words in the input, omits 0-count lengths for readability. */

int main() {
    int wordNum, lineNum, currLen, xAxis, yAxis, state;
    int i, j, k, c, q, w;
    int wordLengthCount[SIZE];

    state = OUT;
    lineNum = wordNum = currLen = xAxis = yAxis = 0;
    for (i = 0; i < SIZE; i++)
        wordLengthCount[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++lineNum;
        if (c == ' ' || c == '\t' || c == '\n'
            || c == ',' || c == '.' || c == ';'
            || c == '?' || c == '!' || c == ':'
            || c == '>' || c == ')' || c == ']'
            || c == '}') {
            wordLengthCount[currLen]++; /* increment the count for the word length equal to current word length */
            state = OUT;
            currLen = 0;

        }
        else if (state == OUT)
            state = IN;
        else
            currLen++;
    }

    for (j = SIZE; j > 0; j--) {
        if (wordLengthCount[j] != 0) {
            yAxis = j;
            break;
        }
    }

    for (k = 1; k < SIZE; k++) {
        if (wordLengthCount[k] != 0)
            xAxis++;
    }

    for (q = yAxis; q >= 1; q--) {
        for (w = 1; w <= xAxis; w++) {
            if (wordLengthCount[w] >= q)
                printf("|X|");

            else
                printf("| |");
        }
        printf("\n"); /* skip to the next line */
    }
    for (w = 1; w <= xAxis; w++) {
        printf("|%d|", w);
    }
    return 0;
}