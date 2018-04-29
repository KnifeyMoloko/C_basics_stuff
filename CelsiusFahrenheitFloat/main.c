#include <stdio.h>

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
    for (celsius = 0; celsius <= 500; celsius += 10) {
        printf("\t  %3.0f\t\t\t\t%3.2f\n", celsius, celsius * 9.0f/5.0f +32);
    }
}