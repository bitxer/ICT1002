/*
 * Module: ICT1002
 * Language: C
 * Lab 3 exercise 2
 * Done By: bitxer
 */
#include <stdio.h>

void acopy(int *dest, const int *src, int n);
int acmp(const int *a1, const int *a2, int n);

int main(){
    int dest[9];
    int src[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    acopy(dest, src, 9);
    printf("Dest array: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", dest[i]);
    }
    printf("\nComparison of same array:\t%d\n", acmp(dest, src, 9));
    int diff[9];
    acopy(diff, src, 9);
    diff[7] += 1;
    printf("Comparison of different array:\t%d\n", acmp(diff, src, 9));
}

void acopy(int *dest, const int *src, int n){
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int acmp(const int *a1, const int *a2, int n){
    for (int i = 0; i < n; i++) {
        if (a1[i] != a2[i]){
            return 0;
        }
    }
    return 1;
}