#include <stdio.h>

// Macros
#define IS_POSITIVE(n) ((n) > 0)
#define IS_NEGATIVE(n) ((n) < 0)

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (IS_POSITIVE(num))
        printf("%d is Positive.\n", num);
    else if (IS_NEGATIVE(num))
        printf("%d is Negative.\n", num);
    else
        printf("The number is Zero.\n");

    return 0;
}