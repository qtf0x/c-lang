/**
 * @author qtf0x
 * @date 02.08.2022
 *
 * @brief Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main() {
    // on Windows, EOF = ctrl + z
    // on UNIX, EOF = ctrl + d
    printf("The value of `getchar() != EOF`: %d\n", getchar() != EOF);

    return 0;
}
