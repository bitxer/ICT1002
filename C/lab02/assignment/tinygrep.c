/*
 * Module: ICT1002
 * Language: C
 * Lab 2 Assignment
 * Done By: bitxer
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[256];
    str[255] = '\0';
    printf("Enter a sentence, up to 255 characters:\n");
    fgets(str, 255, stdin);

    char pattern[256];
    pattern[255] = '\0';
    printf("Enter a pattern, up to 255 characters:\n");
    fgets(pattern, 255, stdin);
    pattern[strlen(pattern) - 1] = '\0';

    char raw_insensitive = '\0';
    printf("Match should be case-senstive?\n");
    fflush(stdin);
    raw_insensitive = fgetc(stdin);
    int sens = 0;
    switch (raw_insensitive) {
        case 'Y':
        case 'y':
            sens = 1;
            break;
        case 'N':
        case 'n':
            sens = 0;
            break;
    }
    
    int match = 0;
    int pos = 0;
    char cpatt = '\0', current = '\0';
    for (int i = 0; i < strlen(str); i++) {
        if (!sens) {
            cpatt = tolower(pattern[match]);
            current = tolower(str[i]);
        } else {
            cpatt = pattern[match];
            current = str[i];
        }
        if (match == 0)
            pos = i;

        switch (cpatt) {
            case '.':
                match++;
                break;
            case '_':
                if (isspace(current))
                    match++;
                else
                    match = 0;
                break;
            default:
                if (current == cpatt)
                    match++;
                else
                    match = 0;
                break;
        }
        if (match == strlen(pattern))
            break;
    }
    if (match == strlen(pattern))
        printf("Matches at position %d.\n", pos);
    else
        printf("No match.\n");
}