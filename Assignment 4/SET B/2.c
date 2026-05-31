#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels=0, consonants=0, digits=0, spaces=0, i;

    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if(isdigit(str[i]))
            digits++;
        else if(str[i]==' ')
            spaces++;
        else if(isalpha(str[i])) {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);

    return 0;
}