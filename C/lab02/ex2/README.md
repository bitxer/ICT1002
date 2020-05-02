# Exercise 2: Character and String Expressions
## Task Description
Suppose that the following declarations and assignments have been made in a C program:
```
char *a = "abcdef";
char b[7];
strcpy(b, a);
for (int i = 0; i < 3; i++)
    b[i] = b[i] + 1;
b[3] = '\0';
```
## Requirements
Write a program to print the values for each of the following expressions.
1. a[0]
2. b[0]
3. b[4]
4. strlen(a)
5. strlen(b)
6. strcmp(a, b)