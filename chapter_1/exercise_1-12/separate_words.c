/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Exercise 1-12. Write a program that prints its input one word per
 * line.
 */

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    int state = OUT;

    for (int nextChar = 0; (nextChar = getchar()) != EOF;) {
        // short-ciruiting is guaranteed in C
        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t') {
            state = OUT;
            putchar('\n');
        } else if (state == OUT) {
            state = IN;
            putchar(nextChar);
        } else {
            putchar(nextChar);
        }
    }

    return 0;
}
