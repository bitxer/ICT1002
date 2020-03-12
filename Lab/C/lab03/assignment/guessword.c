/*
 * Module: ICT1002
 * Language: C
 * Lab 3 Assignment
 * Done By: bitxer
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 13
void printguess(char *arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

int main()
{
    char word[MAXLEN];
    word[MAXLEN - 1] = '\0';
    int valid = 1;
    int len = 0;
    do
    {
        valid = 1;
        printf("Player 1, enter a word of no more than 12 letters:\n");
        fgets(word, MAXLEN, stdin);
        len = strlen(word) - 1;
        if (word[0] == '\n'){

            printf("Sorry, the word must contain only English letters.\n");
            valid = 0;
        }
        for (int i = 0; i < len; i++)
        {
            if (word[i] == '\n')
            {
                word[i] = '\0';
            }
            else if (ispunct(word[i]) || isdigit(word[i]))
            {
                printf("Sorry, the word must contain only English letters.\n");
                valid = 0;
                break;
            }
            else
            {
                word[i] = tolower(word[i]);
            }
        }
    } while (!valid);

    char guess[len];
    for (int i = 0; i < len; i++)
    {
        guess[i] = '_';
    }
    guess[len] = '\0';

    int correct = 0, tries = 7;

    while (tries > 0 && correct != len)
    {
        printf("Player 2 has so far guessed: ");
        printguess(guess);
        printf("Player 2, you have %d guesses remaining. Enter your next guess:\n", tries);

        char buf[3] = {'\0', '\0', '\0'};
        fgets(buf, 3, stdin);

        int found = 0;
        for (int i = 0; i < len; i++)
        {
            if (word[i] == buf[0])
            {
                found = 1;
                if (buf[0] != guess[i])
                {
                    guess[i] = buf[0];
                    correct++;
                }
            }
        }

        if (!found)
        {
            tries--;
        }
    }

    printf("Player 2 has so far guessed: ");
    printguess(guess);
    if (correct == len)
    {
        printf("\nPlayer 2 wins.\n");
    }
    else
    {
        printf("\nPlayer 2 lose.\n");
    }
    return 0;
}
