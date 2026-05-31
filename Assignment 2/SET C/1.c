#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int *p1 = &a, *p2 = &b;
    char op;

    printf("Enter first number: ");
    scanf("%d", p1);

    printf("Enter operator (+,-,*,/,%%,^): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", p2);

    switch(op) {
        case '+':
            printf("Result = %d\n", *p1 + *p2);
            break;

        case '-':
            printf("Result = %d\n", *p1 - *p2);
            break;

        case '*':
            printf("Result = %d\n", (*p1) * (*p2));
            break;

        case '/':
            if(*p2 != 0)
                printf("Result = %.2f\n", (float)*p1 / *p2);
            else
                printf("Division by zero not allowed.\n");
            break;

        case '%':
            printf("Result = %d\n", *p1 % *p2);
            break;

        case '^':
            printf("Result = %.2f\n", pow(*p1, *p2));
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}