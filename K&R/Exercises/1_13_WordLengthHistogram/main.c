#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 1909 /* the length of the longest published english word */

/* A program based of off a wc knockoff program. Produces a histogram of the
 * lengths of words in the input, omits 0-count lengths for readability. */

int main() {
    /* Definitions */
    int i, j, k, c, wordNum, currLen, xAxis, yAxis, state;
    int wordLengthCount[SIZE];
    int maxPosition;
    int maxValue;

    /* Inits */
    state = OUT;
    maxPosition = maxValue = wordNum = currLen = xAxis = yAxis = 0;

    /* Fill out the wordLenghtCount array with zeroes */
    for (i = 0; i < SIZE; i++)
        wordLengthCount[i] = 0;

    while ((c = getchar()) != EOF) {
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

    /* write out the contents of wordsLenghtCount */
    for (k = 0; k < SIZE; k++)
        printf("%d,", wordLengthCount[k]);

    /* try to find the last meaningful (non-zero) entry in wordLenghtCount, set an int to that value
     * start with SIZE - 1 to avoid going over the actual size of the array */
    for (k = SIZE-1; k>= 0; k--) {
        if (wordLengthCount[k] > 0) {
            printf("value at position %d is: %d\n", k, wordLengthCount[k]);
            maxPosition = k;
            break;
        }
    }

    /* Since maxPosition tells us how many relevant values we have, we can use
     * it to find the max value of occurences; we start at 1 to avoid counting
     * spaces */

    for (k = 1; k < maxPosition; k++) {
        if (maxValue <= wordLengthCount[k])
            maxValue = wordLengthCount[k];
    }

    printf("maxPosition is: %d\n", maxPosition);
    printf("maxValue is: %d\n", maxValue);

    /* TODO: make a printer loop to go through every row of yAxis and then use maxPosition and wordLengthCount to iterate through the xAxis printing either a symbol or a space depening on the value associated with that column */

}