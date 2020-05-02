/*
 * Module: ICT1002
 * Language: C
 * Lab 2 exercise 3
 * Done By: bitxer
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char magic[6] = "magic";
    magic[6] = '\0';

    char str[256];
    str[255] = '\0';

    printf("Enter a sentence, up to 255 characters:\n");
    fgets(str, 255, stdin);
    str[strlen(str)] = '\0';

    int present = 0;
    int matchcount = 0;
    int count = 0;

    for (int i = 0; i < strlen(str); i++){
        char current = str[i];
        if (isalpha(current) && !ispunct(current)){
            count++;
            if (current == magic[matchcount] && !present){
                matchcount++;
                present = matchcount == strlen(magic);
            } else if (matchcount != 0  && matchcount < strlen(magic)){
                matchcount = 0;
            }
            printf("%c", current);
        } else {
            if (count != 0){
                printf("\t%d\n", count);
                count = 0;
            }
        }
    }
    if (present){
        printf("You said the magic word!\n");
    }
}