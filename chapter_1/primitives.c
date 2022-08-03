/**
 * @author qtf0x
 * @date 14.06.2022
 *
 * @brief Displays the sizes of each C primitive type for a given machine.
 */

#include <stdio.h>

int main() {
    printf("char:\t%ld bytes\t(%ld bits)\n", sizeof(char), sizeof(char) * 8);
    printf("short:\t%ld bytes\t(%ld bits)\n", sizeof(short), sizeof(short) * 8);
    printf("int:\t%ld bytes\t(%ld bits)\n", sizeof(int), sizeof(int) * 8);
    printf("long:\t%ld bytes\t(%ld bits)\n", sizeof(long), sizeof(long) * 8);
    printf("float:\t%ld bytes\t(%ld bits)\n", sizeof(float), sizeof(float) * 8);
    printf("double:\t%ld bytes\t(%ld bits)\n", sizeof(double),
           sizeof(double) * 8);

    return 0;
}
