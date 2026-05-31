#include <stdio.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two integers: ");
    scanf("%d %d", p1, p2);

    printf("Addition = %d\n", *p1 + *p2);
    printf("Subtraction = %d\n", *p1 - *p2);
    printf("Multiplication = %d\n", (*p1) * (*p2));

    if (*p2 != 0)
        printf("Division = %.2f\n", (float)*p1 / *p2);

    return 0;
}