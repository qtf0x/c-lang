/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Exercise 1-11. How would you test the word count program? What kinds
 * of input are most likely to uncover bugs if there are any?
 */

#include <stdio.h>

#define IN 1  // inside a word
#define OUT 0 // outside a word

int main() {
    int nextChar = 0, lines = 0, words = 0, chars = 0, state = OUT;

    for (; (nextChar = getchar()) != EOF; ++chars) {
        if (nextChar == '\n')
            ++lines;

        // short-ciruiting is guaranteed in C
        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++words;
        }
    }

    printf("\nLines:\t%d\nWords:\t%d\nChars:\t%d\n", lines, words, chars);

    return 0;
}
