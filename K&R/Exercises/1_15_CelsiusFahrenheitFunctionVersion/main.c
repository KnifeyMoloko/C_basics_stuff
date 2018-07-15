#include <stdio.h>
#define LOWER 0 /* lower limit of the table */
#define UPPER 500 /* upper limit of the table */
#define STEP 10 /*step size for the table */

/* Celsius to Fahrenheit converter that
 * prints Fahrenheit table based on
 * a lower limit, upper limit and step.
 * This version includes the converter
 * wrapped in a separate function. */

/* declare the converter functions */
float CelsiusToFahrenheit(int celsius);
float FahrenheitToCelsius(int fahrenheit);

int main() {
    /* variable declarations */
    int celsius = LOWER;
    int fahrenheit = LOWER;
    char table_header[26] = "Celsius - Fahreheit Table";
    char table_header_two[27] = "Fahrenheit - Celsius Table";
    char heading_celsius[8] = "Celsius";
    char heading_fahrenheit[11] = "Fahrenheit";

    /* heading prints for the first table */

    printf("\t  %s\n\n\n", table_header);
    printf("\t%8s\t\t%11s\n\n", heading_celsius, heading_fahrenheit);

    /* call the converter function as an argument in the print statement */
    for (celsius; celsius <= UPPER; celsius += STEP)
        printf("\t  %3.0d\t\t\t\t %3.2f \n", celsius, CelsiusToFahrenheit(celsius));

    printf("\n\n\t  %s\n\n\n", table_header_two);
    printf("\t%8s\t\t%11s\n\n", heading_fahrenheit, heading_celsius);

    /* call the converter function as an argument in the print statement */
    for (fahrenheit; fahrenheit <= UPPER; fahrenheit += STEP)
        printf("\t  %3.0d\t\t\t\t %3.2f \n", fahrenheit, FahrenheitToCelsius(fahrenheit));
}

float CelsiusToFahrenheit(int celsius) {
    /* convert Celsius to Fahrenheit */
    return celsius * 9.0f / 5.0f + 32;
    }

float FahrenheitToCelsius(int fahrenheit) {
    /* convert Fahrenheit to Celsius */
    return 5.0f / 9.0f * (fahrenheit - 32);
    }
