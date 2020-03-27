# Assignment: Insertion Sort
## Task Description
One way to sort a collection of items is called insertion sort. The idea is to start with an empty list, then insert items one at a time into it, placing them in their correct position in the order each time. Your task is to implement this algorithm using a linked list, so that a program can sort an arbitrary number of words entered by the user.

## Requirements
1. Every node in the list should store one word, composed entirely of lower case characters. The word may also contain apostrophes and hyphens, but not spaces, quotes, or any other characters that do not normally appear in the middle of English words. The word may be up
to 32 characters long.
2. The program should repeatedly ask the user to enter a word. The program should automatically convert upper-case letters into lower-case ones, but reject words containing characters other than letters, apostrophes, and hyphens.
3. Each new word should be inserted into the list into its correct position in alphabetical order. For example, if the list currently contains the words `cat`, `dog`, and `monkey`, and the user enters the word `elephant`, the new word should be inserted between `dog` and `monkey`. You can use `strcmp()` to determine whether a word comes before or after another in the alphabet (hyphens and apostrophes will be sorted according to their ASCII
values).
4. The program stops asking for words when the user enters the special text `***`. The program should then print out the words, in order, one per line.
5. Finally, the program should de-allocate all of the memory that is has created and terminate.

## Example
Some sample output when the program runs is shown below
```
Please enter a word: cat
Please enter a word: dog
Please enter a word: monkey
Please enter a word: elephant
Please enter a word: ***
All the entered words in order:
cat
dog
elephant
monkey
```

## Note
1. Use `#define` and comments as usual
2. Check for memory allocation failures and report an error if they occur, but continue to execute the program.