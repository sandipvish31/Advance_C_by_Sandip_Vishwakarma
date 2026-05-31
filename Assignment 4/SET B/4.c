#include <stdio.h>
#include <ctype.h>

void findCapital(char str[], int index) {
    if(str[index] == '\0') {
        printf("No Capital Letter Found");
        return;
    }

    if(isupper(str[index])) {
        printf("First Capital Letter = %c", str[index]);
        return;
    }

    findCapital(str, index + 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    findCapital(str, 0);

    return 0;
}