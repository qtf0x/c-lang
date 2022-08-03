/**
 * @author qtf0x
 * @date 31.07.2022
 *
 * @brief Exercise 1-16. Revise the main routine of the longest-line program so
 * it will correctly print hte length of arbitrarily long input lines, and as
 * much as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

/**
 * @brief Read a line into an array, return length.
 *
 * @param line array to store line
 * @param maxline max line length to read
 * @return int length of line that was just read
 */
int getLine(char line[], int maxLine);

/**
 * @brief Copy 'from' into 'to'; assume 'to' is big enough.
 *
 * @param to array to copy line into
 * @param from array to copy line from
 */
void copy(char to[], char from[]);

int main() {
    int len = 0;           // current line length
    int max = 0;           // maximum length seen so far
    char line[MAXLINE];    // current input line
    char longest[MAXLINE]; // longest line saved here

    while ((len = getLine(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) // there was a line
        printf("%s", longest);

    return 0;
}

int getLine(char line[], int maxLine) {
    int c = 0, i = 0;

    for (; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    for (int i = 0; (to[i] = from[i]) != '\0'; ++i) {}
}
