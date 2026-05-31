#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char result[500] = "";
    int i;

    for(i = 1; i < argc; i++)
    {
        strcat(result, argv[i]);
        strcat(result, " ");
    }

    printf("Concatenated String: %s\n", result);

    return 0;
}