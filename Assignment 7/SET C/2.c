#include <stdio.h>

union Shape {
    float radius;

    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union Shape s;
    int choice;
    float area;

    printf("1. Circle\n2. Rectangle\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter Radius: ");
            scanf("%f", &s.radius);

            area = 3.14 * s.radius * s.radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter Length and Width: ");
            scanf("%f%f",
                  &s.rectangle.length,
                  &s.rectangle.width);

            area = s.rectangle.length * s.rectangle.width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}