# Exercise 3: Character and Strings
## Task Description
Write a program that asks the user to type in a sentence of up to 255 characters in length. Your program will then divide the sentence into its individual words (indicated by a space character or punctuation mark) and print them line by line. Each line will include the word and the number of characters in it, as shown below:
```
Enter a sentence, up to 255 characters:
The cat sat on the mat.

The 3
cat 3
sat 3
on  2
the 3
mat 3
```
For an extra exercise, choose a secret "magic word" to be recognised by your program. If the sentence contains the magic word, add the text "You said the magic word!" at the end of the table.
## Hints
1. Use `fgets(buffer, n, stdin)` to read a line of text that includes spaces, where buffer is the array into which you want to place the characters and n is the maximum number of characters to read.
2. You can use the functions defined in `ctype.h` to test whether a character is a letter, a space, or a punctuation mark.

## Note
There are multiple ways to do this. In this folder, I have 2 implementations that will fulfil this. [ex3.tok.c](ex3.tok.c) demonstrates how to make use of a `strtok` to fulfil this and [ex3.c](ex3.c) demonstrates how this can be done without `strtok`.