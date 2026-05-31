#include <stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data d;

    d.i = 100;
    printf("Integer: %d\n", d.i);

    d.f = 12.5;
    printf("Float: %.2f\n", d.f);

    d.c = 'A';
    printf("Character: %c\n", d.c);

    printf("\nAfter storing character, previous values are overwritten.\n");

    return 0;
}