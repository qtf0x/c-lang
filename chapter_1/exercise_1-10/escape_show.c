/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Exercise 1-10. Write a program to copy its input to its output,
 * replacing each tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 */

#include <stdio.h>

int main() {
    int nextChar;

    // on UNIX, \b = ctrl + h
    while ((nextChar = getchar()) != EOF) {
        if (nextChar == '\t')
            printf("%s", "\\t");
        else if (nextChar == '\b')
            printf("%s", "\\b");
        else if (nextChar == '\\')
            printf("%s", "\\\\");
        else
            putchar(nextChar);
    }

    return 0;
}
