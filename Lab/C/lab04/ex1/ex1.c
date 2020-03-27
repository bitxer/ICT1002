/*
 * Module: ICT1002
 * Language: C
 * Lab 4 exercise 1
 * Done By: bitxer
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grade_node {
    char surname[20];
    double grade;
    struct grade_node *next;
};
typedef struct grade_node GRADE_NODE;
typedef GRADE_NODE *GRADE_NODE_PTR;

int main(){
    GRADE_NODE_PTR head = NULL;
    head = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));
    strcpy(head->surname, "Adams");
    // *head->surname = "Adams";
    head->grade = 85.0;
    head->next = NULL;

    GRADE_NODE_PTR current = NULL;
    current = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));
    strcpy(current->surname, "Pritchard");
    // *current->surname = "Pritchard";
    current->grade = 66.5;
    head->next = current;
    current->next = NULL;

    current = (GRADE_NODE_PTR) malloc(sizeof(GRADE_NODE));
    strcpy(current->surname, "Jones");
    // *current->surname = "Jones";
    current->grade = 91.5;
    current->next = head->next;
    head->next = current;

    current = head;
    while (current != NULL) {
        printf("surname= %s, grade= %.1f\n", current->surname, current->grade);
        current = current->next;
    }
    return 0;
}