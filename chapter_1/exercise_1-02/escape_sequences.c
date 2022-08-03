/**
 * @author qtf0x
 * @date 02.08.2022
 *
 * @brief Exercise 1-2. Experiment to find out what happens when printf's
 * argument string contains \c, where c is some charater not listed above.
 */

#include <stdio.h>

int main() {
    printf("hello,\c\d\e\f\g world\n");
    return 0;
}
