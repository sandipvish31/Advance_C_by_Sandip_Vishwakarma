#include <stdio.h>

// Macro to find maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum number = %d\n", MAX(num1, num2));

    return 0;
}