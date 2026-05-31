#include <stdio.h>

// Macro to find minimum of two numbers
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Nested macro to find minimum of three numbers
#define MIN3(a, b, c) MIN(MIN(a, b), c)

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Minimum number = %d\n", MIN3(num1, num2, num3));

    return 0;
}