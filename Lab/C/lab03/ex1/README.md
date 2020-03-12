# Exercise 1: Pointer Syntax
## Task Description
Assume that the following lines of code have been executed.
```
int *zPtr; /* zPtr will reference array z */
int *aPtr = NULL;
void *sPtr = NULL;
int number, i;
int z[5] = {1,2,3,4,5};
zPtr = z;
sPtr = z;
```
## Requirements
Find the error in each of the following fragments of code to be executed after the code above. Check your answer by correcting the error and compiling it.
### Part 1
```
/* use a pointer to get the first value of array */
number = zPtr;
```
### Part 2
```
/* assign array element 2 (the value 3) to number */
number = *zPtr[2];
```
### Part 3
```
/* print the entire array */
for (i = 0; i <= 5; i++){
    printf("%d", zPtr[i]);
}
```