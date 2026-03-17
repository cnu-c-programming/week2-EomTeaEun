#include <stdio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c = 2;

    double x = (a / b) / c;
    double y = (double)a / b;
    printf("%f\n", x);
    printf("%f\n", y);

    return 0;
}

