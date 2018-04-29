#include <stdio.h>
#define SIZE 120

int main() {
    printf("Some stuff to remember in C:\n \n");
    float j = 3.14;
    int i = (int)j; // precede the initialized variable with a parenthesised type name to cast
    printf("The float cast as int is: %d \n", i);

    // suffixes

    float f = 1.2F;
    char c = 'a', c2 = 97;
    int k = 9, l = 017, m = 0x7f;
    double y = 2.4;
    long double z = 4.5L; // notice the suffix here
    char string[] = "hello";
    printf("Float formatted is: %f \n", f);
    printf("Chars are: %c, %c \n", c, c2);
    printf("Ints are: %d, %d, %d \n", k, l, m); // the suffix for ints is obviously 'd' because fuck you
    printf("Double is: %g \n", y); // the suffix for double is obviously 'g' because fuck you
    printf("Long double is: %Lg \n", z); // surprise, long double's suffix is 'Lg' because...never mind
    printf("Char string is: %s \n \n", string);

    // constants

    const int constant = 8343432; /* compile time constant, can't be changed */
    int a[SIZE]; /* the #define preprocesor directive will do text substitution on SIZE, here defining the array size */

    // remember the power of the ternary operator

    int q = l > m ? l : m;
    printf("Ternary operator result: %d", q);

    // no Boolean types, because fuck you

    int v = 0 == 0;
    printf("Truthy truth: %d \n", v);
    int w = 0 == 1;
    printf("Falsy false: %d \n \n", w);

    // Logical operators

    int wubba = v && w;
    int lubba = v || w;
    int wubwub = !(wubba);
    printf("Log operators results: %d, %d, %d \n \n", wubba, lubba, wubwub);

    // Logical operator short-circuiting

    int circuitBreaker = (23 == 32) && (23*42142142 == 23*432532532523523); // the second expression won't be evaluate since the first one's falsehood is sufficient to return the truth-value
    printf("Short circuited: %d \n \n", circuitBreaker);

    // Bitwise operators and assignment operators

    /* Biwise operators:
     * AND: &
     * OR: |
     * XOR: ^
     * 1's Compliment: ~
     * Shift left: <<
     * Shift right: >>
     *
     * Assignment operators:
     * +=
     * -=
     * *=
     * /=
     * %=
     * >>=
     * <<=
     * &=
     * ^=
     * !=
     */

    /* Operator precedence:
     * 1. Unary
     * 2. Multiplicative
     * 3. Additive
     * 4. Assignment
     * 5. Comma
     * WATCH OUT FOR STRANGE PRECEDENCE OF BITWISE OPERATORS
     */
    return 0;
}