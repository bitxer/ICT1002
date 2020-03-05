# 4-3: Elfish
## Task Description
A word is considered elfish if it contains the letters: e, l and f in it, in any order. For instance, we would say that the following words are elfish: tasteful, whiteleaf, unfriendly and waffles, because they each contain those letters.

## Requirements
1. Use the recursive function to implement this.
2. Write one program to call the recursive function and tell the user whether the input word is one elfish or not.

## Hint
You can recursively reduce the both the elfish letters and input word.

## Example
```
$ python2 elfish.py waffles
waffles is one elfish word!

$ python2 elfish.py instance
instance is not an elfish word!
```