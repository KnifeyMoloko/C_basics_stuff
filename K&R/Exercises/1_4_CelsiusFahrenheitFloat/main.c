#include <stdio.h>
#define LOWER 0 /* lower limit of the table */
#define UPPER 500 /* upper limit of the table */
#define STEP 10 /*step size for the table */

/* Celsius to Fahrenheit converter that
 * prints Fahrenheit table based on
 * a lower limit, upper limit and step. */
int main() {
    /* variable declarations */
    int celsius;
    char table_header[26] = "Celsius - Fahreheit Table";
    char heading_celsius[8] = "Celsius";
    char heading_fahrenheit[11] = "Fahrenheit";

    /* heading prints */

    printf("\t  %s\n\n\n", table_header);
    printf("\t%8s\t\t%11s\n\n", heading_celsius, heading_fahrenheit);

    /* main for loop */
    for (celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("\t  %3.0f\t\t\t\t%3.2f\n", celsius, celsius * 9.0f/5.0f +32);
    }
}