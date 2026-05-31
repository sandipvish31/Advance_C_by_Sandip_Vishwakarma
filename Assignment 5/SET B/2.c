#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int max, min, num;

    if(argc < 2)
    {
        printf("Enter numbers.\n");
        return 1;
    }

    max = min = atoi(argv[1]);

    for(i = 2; i < argc; i++)
    {
        num = atoi(argv[i]);

        if(num > max)
            max = num;

        if(num < min)
            min = num;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}