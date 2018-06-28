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


    /* Create histogram header */
    printf("   HISTOGRAM\n\n");

    /* Define xAxis and yAxis seperately for readability */
    yAxis = maxValue;
    xAxis = maxPosition;

    /* Loop through rows and then columns and print out markers to create a histogram */
    /* Column loop */
    for (i = yAxis; i >= 0; i--) {
        /* Row loop */
            /* When you hit the bottom row, print out the values under the
             * columns, depending on how big the maxValue is */
        if (i == 0) {
            if (maxValue < 10) {
                printf("        ");
                for (j = 1; j <= xAxis; j++) {
                    printf("%d    ", wordLengthCount[j]);
                }
            }

            else if (maxValue >= 10 && maxValue < 100) {
                printf("       ");
                for (j = 1; j <= xAxis; j++) {
                    if (wordLengthCount[j] >= 10)
                    printf(" %d  ", wordLengthCount[j]);
                    else
                        printf("  %d  ", wordLengthCount[j]);
                }
            }

            else if (maxValue >= 100 && maxValue < 1000) {
                printf("      ");
                for (j = 1; j <= xAxis; j++) {
                    if (wordLengthCount[j] >= 100)
                        printf("%d  ", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 10)
                        printf(" %d  ", wordLengthCount[j]);
                    else
                        printf("  %d  ", wordLengthCount[j]);
                }
            }

            else if (maxValue >= 1000 && maxValue < 10000) {
                printf("     ");
                for (j = 1; j <= xAxis; j++) {
                    if (wordLengthCount[j] >= 1000)
                        printf("%d ", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 100)
                        printf(" %d ", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 10)
                        printf("  %d ", wordLengthCount[j]);
                    else
                        printf("   %d ", wordLengthCount[j]);
                }
            }

            else if (maxValue >= 1000 && maxValue < 10000) {
                printf("    ");
                for (j = 1; j <= xAxis; j++) {
                    if (wordLengthCount[j] >= 10000)
                        printf("%d", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 1000)
                        printf(" %d", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 100)
                        printf("  %d", wordLengthCount[j]);
                    else if (wordLengthCount[j] >= 10)
                        printf("   %d", wordLengthCount[j]);
                    else
                        printf("    %d", wordLengthCount[j]);

                }
            }
        }

        /*end bottom row printing */
        /* print out the first column with indexing numbers, then go column by column
         * and leave a marker if the value of the corresponding array pos is >= */

        else if (i < 10) {
            for (j = 0; j <= xAxis; j++) {
                if (j == 0)
                    printf("   %d|", i);
                else if (i <= wordLengthCount[j])
                    printf("  ^ |");
                else
                    printf("    |");
            }
        }

        else if (i < 100 && i >= 10 ) {
            for (j = 0; j <= xAxis; j++) {
                if (j == 0)
                    printf("  %d|", i);
                else if (i <= wordLengthCount[j])
                    printf("  ^ |");
                else
                    printf("    |");
            }
        }

        else if (i >= 100 && i < 1000) {
            for (j = 0; j <= xAxis; j++) {
                if (j == 0)
                    printf(" %d|", i);
                else if (i <= wordLengthCount[j])
                    printf("  ^ |");
                else
                    printf("    |");
            }
        }

        else
            for (j = 0; j <= xAxis; j++) {
                if (j == 0)
                    printf("%d|", i);
                else if (i <= wordLengthCount[j])
                    printf("  ^ |");
                else
                    printf("    |");
            }
        /* end of xAxis (row) loop */
        printf("\n"); /* skip to next line */
    }
    /* end of yAxis (column) loop */
}
