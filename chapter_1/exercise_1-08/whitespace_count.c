/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main() {
    int blanks = 0, tabs = 0, newlines = 0;

    for (int nextChar = 0; (nextChar = getchar()) != EOF;) {
        if (nextChar == ' ')
            ++blanks;
        else if (nextChar == '\t')
            ++tabs;
        else if (nextChar == '\n')
            ++newlines;
    }

    printf("\n\nBlanks:\t\t%d\nTabs:\t\t%d\nNewlines:\t%d\n", blanks, tabs,
           newlines);

    return 0;
}
