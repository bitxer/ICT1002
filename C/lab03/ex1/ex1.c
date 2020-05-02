/*
 * Module: ICT1002
 * Language: C
 * Lab 3 exercise 1
 * Done By: bitxer
 */
#include <stdio.h>

int main(){
    int *zPtr = NULL;
    int *aPtr = NULL;
    void *sPtr = NULL;
    int number , i;
    int z[5] = {1,2,3,4,5};
    zPtr = z;
    sPtr = z;
    // 2a
    /* use a pointer to get the first value of array of number */
    number = *zPtr;
    printf("2a: %d\n", number);
    // 2b
    /* assign array element 2 (the value 3) to number*/
    number = zPtr[2];
    printf("2b: %d %d\n", number, zPtr[2]);
    // 2c
    printf("2c: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", zPtr[i]);
    }
    printf("\n");
    return 0;
}