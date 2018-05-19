#include <stdio.h>


/* Print Fahrenheit-Celsius table
 * for fahr = 0, 20,..., 300 */
main() {
    /* variable declaration of the form: type variable_name1, variable_name2... */
    int fahr, celsius;
    int lower, upper, step;

    /* variable value assignments aka variable initialization */
    lower = 0;  /* lower limit of temperature scale */
    upper = 300; /* upper limit of temperature scale */
    step = 20;  /* step size */

    fahr = lower;
    while (fahr <= upper) {
        /* we split the 5/9 * (fahr - 32) because 5/9 would evaluate to zero! */
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr += step;
    }
}