/**
 * @author qtf0x
 * @date 14.06.2022
 *
 * @brief Exercise 1-5. Modify the temperature conversion program to print the
 * table in reverse order, that is, from 300 degrees to 0.
 */

#include <stdio.h>

// These are symbolic constants, not variables!
#define LOWER 0.0   // lower limit of table
#define UPPER 300.0 // upper limit
#define STEP 20.0   // step size

/**
 * @brief convert from fahrenheit to celsius
 *
 * @param fahr temperature in degrees fahrenheit
 * @return double temperature in degrees celsius
 */
double fahrToCel(double fahr);

int main() {
    char* fahr_str = "°F";
    char* celsius_str = "°C";
    printf("%7s | %7s\n---------------\n", fahr_str, celsius_str);

    for (double fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%6.1f | %6.1f\n", fahr, fahrToCel(fahr));
    }

    return 0;
}

double fahrToCel(double fahr) { return (5.0 / 9.0) * (fahr - 32.0); }
