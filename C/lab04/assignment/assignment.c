/*
 * Module: ICT1002
 * Language: C
 * Lab 4 Assignment
 * Done By: bitxer
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 32

struct list {
    char *word;
    struct list *next;
};

typedef struct list LIST;
typedef LIST * LIST_PTR;

int main(){
    LIST_PTR head = NULL;
    int com = 0;

    do {
        char *word = (char *) calloc(MAX_LENGTH, sizeof(char));
        printf("Please enter a word: ");
        fgets(word, MAX_LENGTH, stdin);
        word = strtok(word, "\n");
        if (strcmp(word, "***") == 0) {
            com = 1;
            break;
        }

        int invalid = 0;
        for (int i = 0; (i < strlen(word)) && !invalid; i++){
            if (isalpha(word[i])) {
                word[i] = tolower(word[i]);
                continue;
            }
            switch (word[i]) {
                case '\'':
                case '-':
                    break;
                default:
                    invalid = 1;
                    break;
            }
        }

        if (invalid) {
            printf("Invalid character entered\n");
            continue;
        }

        LIST_PTR current = (LIST_PTR) calloc(2, sizeof(LIST));
        current->word = word;
        current->next = NULL;

        if (head == NULL) {
            head = current;
            continue;
        } 

        LIST_PTR comptr = head;
        LIST_PTR prevptr = NULL;
        int found = 0;
        while (comptr != NULL) {
            if (strcmp(word, comptr->word) < 0) {
                found = 1;
                if (prevptr == NULL){
                    current->next = head;
                    head = current;
                } else {
                    current->next = comptr;
                    prevptr->next = current;
                }
                break;
            }
            prevptr = comptr;
            comptr = comptr->next;
        }

        if (!found) {
            prevptr->next = current;
        }
    } while (!com);

    printf("All the entered word in order\n");
    LIST_PTR current = head;
    while (current != NULL) {
        printf("%s\n", current->word);
        current = current->next;
    }

    return 0;
}