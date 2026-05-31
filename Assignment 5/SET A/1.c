#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Program Name: %s\n", argv[0]);
    printf("Number of Arguments = %d\n", argc - 1);

    return 0;
}