/**
 * @author qtf0x
 * @date 03.08.2022
 *
 * @brief Exercise 1-17. Write a program to print all input lines that are
 * longer than 80 characters.
 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line size
#define LINE_LEN 80  // minimum line length to print

/**
 * @brief Read a line into an array, return length.
 *
 * @param line array to store line
 * @param maxline max line length to read
 * @return int length of line that was just read
 */
int getLine(char line[], int maxLine);

/**
 * @brief Print up to MAXLINE characters from a string, then the rest of the
 * current line on stdout (if any).
 *
 * @param line string to print from
 * @param len the length of the string in line
 */
void printLine(char line[], int len);

int main() {
    int len = 0;        // current line length
    char line[MAXLINE]; // current input line

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > LINE_LEN) {
            printLine(line, len);
        }
    }

    return 0;
}

int getLine(char line[], int maxLine) {
    int c = 0, i = 0;

    for (; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = (char)c;

    if (c == '\n') {
        line[i] = (char)c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void printLine(char line[], int len) {
    printf("\n%s", line);

    // print overflow characters
    for (int c = 0; len >= MAXLINE - 1 && (c = getchar()) != EOF && c != '\n';)
        putchar(c);
}
