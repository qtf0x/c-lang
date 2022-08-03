/**
 * @author qtf0x
 * @date 14.06.2022
 *
 * @brief Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table.
 */

#include <stdio.h>

// These are symbolic constants, not variables!
#define LOWER 0.0   // lower limit of table
#define UPPER 300.0 // upper limit
#define STEP 20.0   // step size

int main() {
    char* fahr_str = "°F";
    char* celsius_str = "°C";

    printf("%7s | %7s\n---------------\n", celsius_str, fahr_str);

    for (double celsius = LOWER; celsius <= UPPER; celsius += STEP) {
        printf("%6.1f | %6.1f\n", celsius, ((9.0 / 5.0) * celsius) + 32.0);
    }

    return 0;
}
