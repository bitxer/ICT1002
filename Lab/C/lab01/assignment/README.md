# Assignment: Guessint
## Task Description
Write a program called guessint that will play a simple two-player number-guessing game with the requirements as stated below.

## Requirements
1. The program will output "Player 1, enter a number between 1 and 1000:". If the player enters a number that is not in this range (inclusive), the program will output "That number is out of range." This repeats until Player 1 has entered a number that is in range.
2. Player 2 (who has not been watching Player 1) has ten rounds in which to correctly identify the number. At the start of each round, the program will output "Player 2, you have n guesses remaining." where n is the number of rounds left.
3. The program will output "Enter your guess:" and wait for Player 2 to enter a number.
    1. If Player 2's guess is too high, the program will output "Too high."
    2. If Player 2's guess is too low, the program will output "Too low."
    3. If Player 2's guess is correct, the program will output "Player 2 wins." and stop.
    4. If Player 2's guess is out of range, the program will output "That number is out of range." and return to Step 3. The number of guess should not be incremented.
4. If Player 2 has not guessed the number at the end of the tenth round, the program will output "Player 1 wins." and stop.

## Note
1. Use macros (#define) to represent all constants, so that it is easy to change things like the number of guesses allowed, the highest number allowed, and so on.
2. Include comment your code that explains what each section of it does.

## Example
```
Player 1, enter a number between 1 and 1000:
1500
That number is out of range.
Player 1, enter a number between 1 and 1000:
500
Player 2, you have 10 guesses remaining.
Enter your guess:
750
Too high.
Player 2, you have 9 guesses remaining.
Enter your guess:
250
Too low.
Player 2, you have 8 guesses remaining.
Enter your guess:
500
Player 2 wins.
```

# Resources
1. http://www.cplusplus.com/reference/clibrary/ has good documentation for the C Library. You can look up how to use functions like printf(), scanf(), etc. here. You may ignore the parts of the site referring to C++ (you will see C++ in ICT1009).
2. https://www.tutorialspoint.com/cprogramming/index.htm has a series of tutorials on aspects of C, covering nearly all of the topics in this course plus some more obscure topics like storage classes.
3. If you want more practice, you can try sites like Jutge.org (http://jutge.org) and HackerRank (https://www.hackerrank.com). These have many kinds of problems to try and on-line compilers that can check whether or not your program is correct. Be warned that many of the problems are quite hard for beginning programmers!