#include <stdio.h>

int main()
{
    int a = 5;
    int b = 5;
    int c = 5;

    printf("%d %d %d\n", a, b, c);
    a = b + c + 4;
    printf("%d %d %d\n", a, b, c);
    a = b++ + (c *= 4) / 2;
    printf("%d %d %d\n", a, b, c);

    return 0;
}

