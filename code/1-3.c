#include <stdio.h>

int main()
{
    int age = 0;
    int rating = 0;
    double grade = 0.0;
    scanf("%d %d %lf", &age, &rating, &grade);
    printf("%d %d %f\n", age, rating, grade);

    return 0;
}
