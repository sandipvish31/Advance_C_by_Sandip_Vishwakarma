#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];

    printf("Enter sentence: ");
    gets(str);

    printf("Enter word to remove: ");
    gets(word);

    char *pos = strstr(str, word);

    if(pos != NULL)
        strcpy(pos, pos + strlen(word));

    printf("Result: %s", str);

    return 0;
}