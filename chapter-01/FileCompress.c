/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Copy text input to text output, replacing each string of one or more
 * blanks by a single blank, each tab by \t, each backspace by \b, and each
 * backslash by \\.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    int nextChar;
    bool lastBlank = 0;

    while ((nextChar = getchar()) != EOF) {
        if (nextChar == '\t')
            printf("%s", "\\t");
        else if (nextChar == '\b')
            printf("%s", "\\b");
        else if (nextChar == '\\')
            printf("%s", "\\\\");
        else if (lastBlank && nextChar != ' ')
            printf("%c%c", ' ', nextChar);
        else if (nextChar != ' ')
            putchar(nextChar);

        lastBlank = (nextChar == ' ');
    }

    // putchar('\n');

    return 0;
}

