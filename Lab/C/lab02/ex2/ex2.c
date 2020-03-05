/*
 * Module: ICT1002
 * Language: C
 * Lab 2 exercise 2
 * Done By: bitxer
 */
#include <stdio.h>
#include <string.h>

int main(){
    char *a = "abcdef";
    char b[7];
    strcpy(b, a);
    for (int i = 0; i < 3; i++)
        b[i] = b[i] + 1;
    b[3] = '\0';

    printf("%c\n", a[0]);
    printf("%c\n", b[0]);
    printf("%c\n", b[4]);
    printf("%ld\n", strlen(a));
    printf("%ld\n", strlen(b));
    printf("%i\n", strcmp(a,b));
}