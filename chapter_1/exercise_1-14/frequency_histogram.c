/**
 * @author qtf0x
 * @date 12.07.2022
 *
 * @brief Exercise 1-14. Write a program to print a histogram of the frequencies
 * of different characters in its input.
 */

#include <stdio.h>

#define LETR_MAX 256

int main() {
    int nextChar = 0;
    int charCnts[LETR_MAX];

    for (int i = 0; i < LETR_MAX; ++i)
        charCnts[i] = 0;

    while ((nextChar = getchar()) != EOF) {
        ++charCnts[nextChar];
    }

    putchar('\n');

    for (int i = 0; i < LETR_MAX; ++i) {
        if (charCnts[i] > 0) {
            if (i == '\n')
                printf("\n\\n: ");
            else if (i == '\t')
                printf("\n\\t: ");
            else if (i == '\b')
                printf("\n\\b: ");
            else if (i == 0)
                printf("\n\\0: ");
            else if (i == '\v')
                printf("\n\\v: ");
            else
                printf("\n%2c: ", i);
        }

        for (int j = 0; j < charCnts[i]; ++j)
            putchar('*');
    }

    putchar('\n');

    return 0;
}
