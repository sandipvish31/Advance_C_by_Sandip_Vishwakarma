#include <stdio.h>

// Macro to calculate square
#define SQUARE(x) ((x) * (x))

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d = %d\n", num, SQUARE(num));

    return 0;
}