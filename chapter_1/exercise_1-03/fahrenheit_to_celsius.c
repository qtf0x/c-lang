/**
 * @author qtf0x
 * @date 14.06.2022
 *
 * @brief Exercise 1-3. Modify the temperature conversion program ot print a
 * heading above the table.
 */

#include <stdio.h>

// These are symbolic constants, not variables!
#define LOWER 0.0   // lower limit of table
#define UPPER 300.0 // upper limit
#define STEP 20.0   // step size

int main() {
    char* fahr_str = "°F";
    char* celsius_str = "°C";
    printf("%7s | %7s\n---------------\n", fahr_str, celsius_str);

    for (double fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%6.1f | %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }

    return 0;
}
