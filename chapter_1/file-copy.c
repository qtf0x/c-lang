/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Uses getchar() and putchar() to copy standard input to standard output
 * one character at a time.
 */

#include <stdio.h>

int main() {
    int c; // use int not char to guarantee enough space for EOF

    // any assignment is an expression with value of the left-hand side AFTER
    // assignment
    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
