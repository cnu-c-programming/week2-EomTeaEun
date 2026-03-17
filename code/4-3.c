#include <stdio.h>

int main()
{
    int n = 0;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int is_prime = 1;
    if (n < 2) {
        is_prime = 0;
    } else {
        for (int i = 2; (long long)i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("%s\n", is_prime ? "true" : "false");

    return 0;
}

