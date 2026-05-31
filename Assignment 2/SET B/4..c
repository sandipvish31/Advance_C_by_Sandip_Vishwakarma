#include <stdio.h>

void square(int side, float *area, float *perimeter) {
    *area = side * side;
    *perimeter = 4 * side;
}

int main() {
    int side;
    float area, perimeter;

    printf("Enter side of square: ");
    scanf("%d", &side);

    square(side, &area, &perimeter);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}