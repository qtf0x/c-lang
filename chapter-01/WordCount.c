/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Counts lines, words, and characters, with the loose definition that a
 * word is any sequence of characters that does not contain a blank, tab, or
 * newline.
 */

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    int nextChar, lines, words, chars, state;

    state = OUT;

    for (lines = words = chars = 0; (nextChar = getchar()) != '|'; ++chars) {
        if (nextChar == '\n')
            ++lines;

        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++words;
        }
    }

    printf("%d %d %d\n", lines, words, chars);

    return 0;
}

