/*
 * Module: ICT1002
 * Language: C
 * Lab 1 Assignment
 * Done By: bitxer
 */
#include <stdio.h>
#define ULIMIT 1000
#define LLIMIT 1

int main(){
    int choice = 0, valid=0;
    // Request input and validate input is in correct range
    do {
        printf("Player 1, enter a number between 1 and 1000:\n");
        scanf("%d", &choice);
        valid = choice >= LLIMIT || choice <= ULIMIT;
        if (!valid) {
            printf("That number is out of range.\n");
        }
    } while (!valid);

    int guess = 0, chance = 11;
    // Allow player 2 to guess and check
    do {
        chance--;
        printf("Player 2, you have %d guesses remaining\n", chance);
        printf("Enter your guess:\n");
        scanf("%d", &guess);
        if (choice >= ULIMIT || choice <= LLIMIT){
            printf("The number is out of range");
        } else if (guess < choice){
            printf("Too low.\n");
        } else if (guess > choice) {
            printf("Too high.\n");
        } else {
            printf("Player 2 wins.\n");
        }
    } while (guess != choice && chance > 0);
}