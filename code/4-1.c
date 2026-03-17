#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    char op = 0;

    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        return 0;
    }

    int result = 0;
    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = a / b;

    printf("%d\n", result);

    return 0;
}

