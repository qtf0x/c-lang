/**
 * @author qtf0x
 * @date 05.08.2022
 *
 * @brief Exercise 1-19. Write a function reverse(s) that reverses the character
 * string s. Use it to write a program that reverses its input a line at a time.
 */

#include <stdio.h>

#define LINE_MAX 80

/**
 * @brief Clears the memory in a character array to be all zeros (before the
 * first null terminator).
 *
 * @param input array to clear
 */
void str_clear(char input[]);

/**
 * @brief Finds the length of a given C-style character string.
 *
 * @param input the string to measure
 * @return int the length of string input
 */
int str_len(char input[]);

/**
 * @brief Reverses the character string given as input.
 *
 * @param input the string to reverse
 */
void reverse(char input[]);

int main() {
    int next_char = 0;
    char next_line[LINE_MAX];
    str_clear(next_line);

    for (int i = 0; i < LINE_MAX - 1; ++i) {
        if ((next_char = getchar()) == EOF)
            break;

        if (next_char != '\n')
            next_line[i] = (char)next_char;
        else {
            next_line[i] = '\0';
            reverse(next_line);

            printf("%s\n", next_line);

            // str_clear(next_line); // bugged
            i = 0;
        }
    }

    return 0;
}

void str_clear(char input[]) {
    int len = str_len(input);

    for (int i = 0; i < len; ++i)
        input[i] = 0;
}

int str_len(char input[]) {
    int len = 0;

    while (input[len] != '\0')
        ++len;

    return len;
}

void reverse(char input[]) {
    int len = str_len(input);
    char swap = 0;

    for (int i = 0; i < len / 2; ++i) {
        swap = input[i];
        input[i] = input[len - i - 1];
        input[len - i - 1] = swap;
    }
}
