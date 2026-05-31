#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i;

    if(argc != 2)
    {
        printf("Enter one string.\n");
        return 1;
    }

    for(i = 0; argv[1][i] != '\0'; i++)
    {
        if(isupper(argv[1][i]))
            argv[1][i] = tolower(argv[1][i]);
        else if(islower(argv[1][i]))
            argv[1][i] = toupper(argv[1][i]);
    }

    printf("%s\n", argv[1]);

    return 0;
}