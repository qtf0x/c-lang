/**
 * @author qtf0x
 * @date 12.07.2022
 *
 * @brief Prints a historgram of the lengths of words in the input, as well as
 * of the frequencies of different characters in its input.
 */

#include <stdbool.h>
#include <stdio.h>

#define WORD_MAX 45
#define LETR_MAX 98
#define LETR_OFFSET 2

int main() {
    bool inWord = false;
    int nextChar, currLen;
    int wordCnts[WORD_MAX], charCnts[LETR_MAX];

    for (int i = 0; i < WORD_MAX; ++i)
        wordCnts[i] = 0;

    for (int i = 0; i < LETR_MAX; ++i)
        charCnts[i] = 0;

    while ((nextChar = getchar()) != EOF) {
        if (nextChar == '\t')
            ++charCnts[0];
        else if (nextChar == '\n')
            ++charCnts[1];
        else if (nextChar > LETR_MAX - LETR_OFFSET)
            ++charCnts[LETR_MAX - 1];
        else
            ++charCnts[nextChar - ' ' + LETR_OFFSET];

        if (nextChar == ' ' || nextChar == '\n' || nextChar == '\t') {
            // leaving word
            if (inWord) {
                if (currLen >= WORD_MAX)
                    ++wordCnts[WORD_MAX - 1];
                else
                    ++wordCnts[currLen - 1];

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

    for (int i = 0; i < WORD_MAX; ++i) {
        printf("%2d: ", i + 1);

        for (int j = 0; j < wordCnts[i]; ++j)
            putchar('*');

        putchar('\n');
    }

    putchar('\n');

    for (int i = 0; i < LETR_MAX; ++i) {
        if (i == 0)
            printf("\\t: ");
        else if (i == 1)
            printf("\\n: ");
        else if (i == LETR_MAX - 1)
            printf("%c: ", 255);
        else
            printf("%c: ", i + ' ' - LETR_OFFSET);

        for (int j = 0; j < charCnts[i]; ++j)
            putchar('*');

        putchar('\n');
    }

    return 0;
}

