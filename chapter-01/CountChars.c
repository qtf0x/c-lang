/**
 * @author qtf0x
 * @date 05.07.2022
 *
 * @brief Count characters in input.
 */

#include <stdio.h>

int main() {
    long nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // isolated semicolon called a null statement

    printf("%ld\n", nc);
}

