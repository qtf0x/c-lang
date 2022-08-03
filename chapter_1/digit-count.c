/**
 * @author qtf0x
 * @date 12.07.2022
 *
 * @brief Counts the number of occurrences of each digit, of white space
 * characters (blank, tab, newline), and of all other characters.
 */

#include <stdio.h>

int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0']; // works in any character set
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

    return 0;
}
