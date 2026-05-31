#include <stdio.h>

// Macro for PI
#define PI 3.14159

// Macro to calculate area of circle
#define AREA(r) (PI * (r) * (r))

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = AREA(radius);

    printf("Area of the circle = %.2f\n", area);

    return 0;
}