#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50];
    int i=0, j=0;

    printf("Enter a sentence: ");
    gets(str);

    while(1) {
        if(str[i]==' ' || str[i]=='\0') {
            word[j]='\0';

            if(j>0 && (word[j-1]=='e' || word[j-1]=='E'))
                printf("%s\n", word);

            j=0;

            if(str[i]=='\0')
                break;
        }
        else {
            word[j++]=str[i];
        }
        i++;
    }

    return 0;
}