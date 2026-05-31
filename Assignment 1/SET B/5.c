#include <stdio.h>

// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Nested macro to find maximum of three numbers
#define MAX3(a, b, c) MAX(MAX(a, b), c)

int main()
{
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Maximum number = %d\n", MAX3(num1, num2, num3));

    return 0;
}