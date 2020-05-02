/*
 * Module: ICT1002
 * Language: C
 * Lab 2 exercise 3
 * Done By: bitxer
 */
#include <stdio.h>
#include <string.h>

int main(){
    char magic[6] = "magic";
    magic[5] = '\0';

    char str[256];
    str[255] = '\0';

    printf("Enter a sentence, up to 255 characters:\n");
    fgets(str, 255, stdin);
    str[strlen(str)] = '\0';
    int magicpresent = 0;
    char * newstr = strtok(str, "\n");
    char * tokenise = strtok(newstr, " ");
    while (tokenise != NULL) {
        printf("%s\t%ld\n", tokenise, strlen(tokenise));
        if (!strcmp(tokenise, magic)){
            magicpresent = 1;
        }
        tokenise = strtok(NULL, " ");
    }
    if (magicpresent){
        printf("You said the magic word!\n");
    }

}