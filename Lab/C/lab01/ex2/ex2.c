/*
 * Module: ICT1002
 * Language: C
 * Lab 1 exercise 2
 * Done By: bitxer
 */

#include <stdio.h>

int main(){
    int a = -1, b = 2;
    float x = 0.1;
    float y = 1.5;
    char c = 'p';

    printf("Part a\n");
    printf("a / b\t\t%d\n", a/b);
    printf("a * b\t\t%d\n", a*b);
    printf("(b * 3) %% 4\t%d\n", (b * 3) % 4);
    printf("x * a\t\t%f\n", x * a);
    printf("x * y\t\t%f\n", x * y);
    printf("y / x\t\t%f\n", y / x);
    printf("c - 3\t\t%c\n", c - 3);

    printf("Part b\n");
    printf("%4d\n", a);
    printf("%04d\n", b);
    printf("a/b = %d\n", a/b);
    printf("%x\n", b);
    printf("%.2f\n", y);
    printf("%10.1f\n", x);
    printf("c\tt%c\n", c);
}