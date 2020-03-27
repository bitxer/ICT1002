# Exercise 1: Linked Lists
## Task Description
Write a program that creates and manipulates a list of students according to the steps
below. You may start with the following type declarations:
```
struct * grade_node {
    char * surname[20];
    double * grade;
    struct * grade_node *next;
};
typedef struct * grade_node * grade_NODE;
typedef * grade_NODE ** grade_NODE_PTR;
```
## Requirements
All the following manipulations may be done in `main()`
1. Declare a pointer called `head` that will point to the start of the list. The list begins without any elements, so its initial value will be `NULL`.
2. Create a new node and fill it with the following data:
    * surname: "Adams"
    * grade: 85.0
Place this node at the start of the list.
3. Create another node and fill it with the following data:
    * surname: "Pritchard"
    * grade: 66.5
Place this node at the end of the list.
4. Create one more node and fill it with the following data:
    * surname: "Jones"
    * grade: 91.5
Place this node between the "Adams" node and the "Pritchard" node. (The list should be in alphabetical order.)