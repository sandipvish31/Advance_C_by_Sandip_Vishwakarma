#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    gets(str);

    ptr = str + strlen(str) - 1;

    printf("Reverse String: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }

    return 0;
}