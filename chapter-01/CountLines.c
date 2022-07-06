/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Count lines in input.
 */

#include <stdio.h>

int main() {
    int nextChar, newlines, tabs, spaces;

    newlines = 0;
    tabs = 0;
    spaces = 0;

    while ((nextChar = getchar()) != EOF)
        if (nextChar == '\n')
            ++newlines;
        else if (nextChar == '\t')
            ++tabs;
        else if (nextChar == ' ')
            ++spaces;

    printf("Lines: %d\nTabs: %d\nSpaces: %d\n", newlines, tabs, spaces);

    return 0;
}

