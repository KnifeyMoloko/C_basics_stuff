#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 1909 /* the length of the longest published english word */

/* A program based of off a wc knockoff program. Produces a histogram of the
 * lengths of words in the input, omits 0-count lengths for readability. */

main() {
    int i, j, c, wordNum, lineNum, currLen, state;
    int wordLengthCount[SIZE];
    int histogramXAxis;
    int histogramYAxis;

    state = OUT;
    lineNum = wordNum = currLen = 0;
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

    for (j = 1; j < SIZE; j++) {
        if (wordLengthCount[j] != 0)
            printf("The number of words with length %d is: %d\n", j, wordLengthCount[j]);
    }


}