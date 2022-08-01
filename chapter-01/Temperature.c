/**
 * @author qtf0x
 * @date 14.06.2022
 *
 * @brief Print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300
 *        (and then the other way around).
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

/**
 * @brief convert from celsius to fahrenheit
 *
 * @param celsius temperature in degrees celsius
 * @return double temperature in degrees fahrenheit
 */
double celToFahr(double celsius);

int main() {
    char* fahr_str = "°F";
    char* celsius_str = "°C";
    printf("%7s | %7s\n---------------\n", fahr_str, celsius_str);

    for (double fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%6.1f | %6.1f\n", fahr, fahrToCel(fahr));
    }

    printf("\n%7s | %7s\n---------------\n", celsius_str, fahr_str);

    for (double celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%6.1f | %6.1f\n", celsius, celToFahr(celsius));
    }

    return 0;
}

double fahrToCel(double fahr) { return (5.0 / 9.0) * (fahr - 32.0); }

double celToFahr(double celsius) { return ((9.0 / 5.0) * celsius) + 32.0; }
