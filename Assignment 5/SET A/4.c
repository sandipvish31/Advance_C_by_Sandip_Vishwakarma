#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    double product = 1.0;

    if(argc < 2)
    {
        printf("No numbers provided.\n");
        return 1;
    }

    for(i = 1; i < argc; i++)
    {
        product *= atof(argv[i]);
    }

    printf("Product = %.2lf\n", product);

    return 0;
}