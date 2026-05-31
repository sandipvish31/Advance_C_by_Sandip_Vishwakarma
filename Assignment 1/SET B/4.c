#include <stdio.h>

// Macro to find square
#define SQUARE(x) ((x) * (x))

// Nested macro to find cube
#define CUBE(x) ((x) * SQUARE(x))

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Cube of %d = %d\n", num, CUBE(num));

    return 0;
}