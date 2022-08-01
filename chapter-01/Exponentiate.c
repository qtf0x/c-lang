/**
 * @author qtfox
 * @date 31.07.2022
 *
 * @brief The function power(m, n) raises an integer m to a positive integer
 * power n.
 */

#include <stdio.h>

/**
 * @brief raise base to exp-th power; exp >= 0
 *
 * @param base number to exponentiate
 * @param exp power to raise the base to
 * @return int result of exponentiation (base)^(exp)
 */
int power(int base, int exp);

int main() {
    printf("i\t2^i\t(-3)^i\n-\t---\t------\n");

    for (int i = 0; i < 10; ++i)
        printf("%d\t%d\t%d\n", i, power(2, i), power(-3, i));

    return 0;
}

int power(int base, int exp) {
    int result = 1;

    for (int i = 0; i <= exp - 1; ++i)
        result *= base;

    return result;
}

/* Old Form (before ANSI C):

int power();

power (base, exp)
int base, exp;
{
    int result = 1;

    for (int i = 0; i <= exp - 1; ++i)
        result *= base;

    return result;
}

*/
