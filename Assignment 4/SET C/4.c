#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int len = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0') {
        len++;
        ptr++;
    }

    printf("Length = %d", len);

    return 0;
}