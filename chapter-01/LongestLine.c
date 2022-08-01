/**
 * @author qtf0x
 * @date 31.07.2022
 *
 * @brief Reads a set of text lines and prints the longest.
 */

#include <stdio.h>

#define MAXLINE 1000 // maximum input line size

/**
 * @brief Read a line into line, return length.
 *
 * @param line array to store line
 * @param maxline max line length to read
 * @return int length of line that was just read
 */
int getline(char line[], int maxline);

/**
 * @brief Copy 'from' into 'to'; assume 'to' is big enough.
 *
 * @param to array to copy line inot
 * @param from array to copy line from
 */
void copy(char to[], char from[]);

main() {
    int len;               // current line length
    int max = 0;           // maximum length seen so far
    char line[MAXLINE];    // current input line
    char longest[MAXLINE]; // longest line saved here

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0) // there was a line
        printf("%s", longest);

    return 0;
}

int getline(char line[], int maxLine) {
    int c = 0, i = 0;

    for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void copy(char to[], char from[]) {
    for (int i = 0; (to[i] = from[i]) != '\0'; ++i) {}
}
