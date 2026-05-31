#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double a, b;

    if(argc != 4)
    {
        printf("Usage: program operation num1 num2\n");
        return 1;
    }

    a = atof(argv[2]);
    b = atof(argv[3]);

    if(strcmp(argv[1], "add") == 0)
        printf("Result = %.2lf\n", a + b);

    else if(strcmp(argv[1], "subtract") == 0)
        printf("Result = %.2lf\n", a - b);

    else if(strcmp(argv[1], "multiply") == 0)
        printf("Result = %.2lf\n", a * b);

    else if(strcmp(argv[1], "divide") == 0)
    {
        if(b == 0)
            printf("Error: Division by zero\n");
        else
            printf("Result = %.2lf\n", a / b);
    }
    else
        printf("Invalid Operation\n");

    return 0;
}