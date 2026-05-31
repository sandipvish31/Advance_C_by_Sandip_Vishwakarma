#include <stdio.h>

// Macro to check even number
#define IS_EVEN(n) ((n) % 2 == 0)

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (IS_EVEN(num))
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}