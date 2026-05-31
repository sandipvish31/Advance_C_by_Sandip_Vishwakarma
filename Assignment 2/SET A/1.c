#include <stdio.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two integers: ");
    scanf("%d %d", p1, p2);

    if (*p1 > *p2)
        printf("Maximum = %d\n", *p1);
    else
        printf("Maximum = %d\n", *p2);

    return 0;
}