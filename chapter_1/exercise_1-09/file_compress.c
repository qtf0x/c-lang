/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Exercise 1-9. Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    int nextChar;
    bool lastBlank = 0;

    while ((nextChar = getchar()) != EOF) {
        if (lastBlank && nextChar != ' ')
            printf("%c%c", ' ', nextChar);
        else if (nextChar != ' ')
            putchar(nextChar);

        lastBlank = (nextChar == ' ');
    }

    return 0;
}
