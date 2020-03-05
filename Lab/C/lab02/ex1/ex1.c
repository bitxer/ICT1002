/*
 * Module: ICT1002
 * Language: C
 * Lab 2 exercise 1
 * Done By: bitxer
 */
#include <stdio.h>

int main(){
    int a[4]={-1, 2, 10, 7};
    int b[4];
    for(int i=0;i<4;i++)
        b[i]=a[3 - i];
    printf("%d\n", a[3]);
    printf("%d\n", b[3]);
    printf("%d\n", b[a[1]]);
}