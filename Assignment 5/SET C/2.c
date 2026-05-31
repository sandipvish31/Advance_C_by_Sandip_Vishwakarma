#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    double sum = 0, avg;

    if(argc < 2)
    {
        printf("Enter numbers.\n");
        return 1;
    }

    for(i = 1; i < argc; i++)
        sum += atof(argv[i]);

    avg = sum / (argc - 1);

    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf\n", avg);

    return 0;
}