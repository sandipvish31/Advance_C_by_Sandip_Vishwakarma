#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], small[50], large[50];
    int i=0, j=0, min=100, max=0;

    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i]==' ' || str[i]=='\0') {
            word[j]='\0';

            if(j<min && j>0) {
                min=j;
                strcpy(small, word);
            }

            if(j>max) {
                max=j;
                strcpy(large, word);
            }

            j=0;

            if(str[i]=='\0')
                break;
        }
        else {
            word[j++]=str[i];
        }
        i++;
    }

    printf("Smallest Word = %s\n", small);
    printf("Largest Word = %s\n", large);

    return 0;
}