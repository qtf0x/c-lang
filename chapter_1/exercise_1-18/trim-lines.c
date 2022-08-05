/**
 * @author qtf0x
 * @date 05.08.2022
 *
 * @brief Exercise 1-18. Write a program to remove trailing blanks and tabs from
 * each line of input, and to delete entirely blank lines.
 */

#include <stdbool.h>
#include <stdio.h>

int main() {
    int blank_buffer = 0, tab_buffer = 0; // buffers for whitespace characters
    bool blank_line = true;               // flag set on empty lines

    for (int next_char = 0; (next_char = getchar()) != EOF;) {
        // fill buffers until non-whitespace character encountered
        if (next_char == ' ')
            ++blank_buffer;
        else if (next_char == '\t')
            ++tab_buffer;
        else if (next_char != '\n') { // non-whitespace char
            blank_line = false;

            // empty buffers into output
            for (; blank_buffer > 0; --blank_buffer)
                putchar(' ');
            for (; tab_buffer > 0; --tab_buffer)
                putchar('\t');

            putchar(next_char); // copy non-whitespace char to output
        } else {
            if (!blank_line) // don't skip line if not blank
                putchar('\n');

            blank_buffer = tab_buffer = 0; // empty buffers
            blank_line = true;             // ready to read next line
        }
    }

    return 0;
}
