#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;

    printf("Enter a number: ");
    scanf("%d", ptr);

    if (*ptr % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");

    return 0;
}