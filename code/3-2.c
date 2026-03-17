#include <stdio.h>

int main()
{
    signed int a = -1;
    unsigned int b = 1;

    if ((unsigned int)a >= b) {
        printf("a >= b ???\n");
    } else {
        printf("a < b ???\n");
    }
    return 0;
}

