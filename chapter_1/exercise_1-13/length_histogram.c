/**
 * @author qtf0x
 * @date 12.07.2022
 *
 * @brief Exercise 1-13. Write a program to print a histogram of the lengths of
 * words in its input. It is easy to draw the histogram with the bars
 * horizontal; a vertical orientation is more challenging.
 */

#include <stdbool.h>
#include <stdio.h>

#define WORD_MAX 45

int main() {
    bool inWord = false;
    int nextChar = 0, currLen = 0, maxLen = 0, minLen = 0;
    int wordCnts[WORD_MAX];

    for (int i = 0; i < WORD_MAX; ++i)
        wordCnts[i] = 0;

    while ((nextChar = getchar()) != EOF) {
        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t') {
            // leaving word
            if (inWord) {
                if (currLen >= WORD_MAX)
                    ++wordCnts[WORD_MAX - 1];
                else
                    ++wordCnts[currLen - 1];

                if (minLen == 0 || currLen < minLen)
                    minLen = currLen;

                if (currLen > maxLen)
                    maxLen = currLen;

                inWord = false;
                currLen = 0;
            }
        } else if (inWord) {
            // staying in word
            ++currLen;
        } else {
            // entering word
            inWord = true;
            ++currLen;
        }
    }

    if (inWord)
        ++wordCnts[currLen - 1];

    putchar('\n');

    for (int i = minLen; i <= maxLen; ++i) {
        printf("%2d: ", i);

        for (int j = 0; j < wordCnts[i - 1]; ++j)
            putchar('*');

        putchar('\n');
    }

    return 0;
}
