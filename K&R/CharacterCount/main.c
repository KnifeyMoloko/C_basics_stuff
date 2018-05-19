#include <stdio.h>
/* Character counter program that reads the number of characters on input and increments a counter. This is a 'for-loop'
 * version. This slightly improves the K&R version, which would run indefinitely waiting for EOF. The downside is
 * that this is now a one-shot program. Any confirmation of input using the Enter key will end the program. The other
 * change to K&R is that the increment also reassigns the variable c - without it the program just gets stuck in a loop
 * of reading and flushing the buffer without any real effect. I could just make it a full-blown 'terminal' program
 * but it's not worth the time.*/

main() {
    double nc;
    int c;

    c = getchar();
    for (nc = 0; c != EOF && c != '\n'; ++nc, c = getchar())
            ;
        printf("%.0f\n", nc);
}