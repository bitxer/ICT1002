# 3-2: Counting Letters
## Task Description
In this task, you are going to develop one letter game to count the number of letters for given strings.

## Requirements
1.  Write one function letter_count(str) that take in one word and returns a dictionary with the frequency counts of the various letters. Upper and lower-case characters are considered to be different characters.
```
>>> letter_count('This')
{'h':1, 'T':1, 'i':1, 's':1}
>>> letter_count('Thisisit')
{'h':1, 'T':1, 'i':3, 's':2, 't':1}
```
2.  Write one function double_count(str1,str2) that takes in two words and returns a dictionary with the frequency counts of the various letters. Upper and lower-case characters are considered to be different characters.
```
>>> double_count('This', 'isit')
{'h':1, 'T':1, 'i':3, 's':2, 't':1}
```
3.  Write one function various_count(*str) that takes in any number of words and returns a dictionary with the frequency counts of the various letters. Upper and lower-case characters are considered to be different characters.
```
>>> letter_count('This')
{'h':1, 'T':1, 'i':1, 's':1}
>>> double_count('This', 'isit')
{'h':1, 'T':1, 'i':3, 's':2, 't':1}
>>> double_count('This', 'is', 'it')
{'h':1, 'T':1, 'i':3, 's':2, 't':1}
```
4.  Write one program to allow users to input different number of words and output each character's frequency.

> HINT: In Python, using “def func(*str): list1=str”, list1 is able to obtain any number of arguments and stores it as a list. You can further get each element from the list and count each word independently. You can implement another function to merge two dictionaries.
## Hint
In order to split one string, split() function can be used. For instance, str='1,2,3,4,10', list1=str.split(',') would split the string and store the numbers in the list. Please keep in mind that each element in the list is a string type now. You have to figure out one way to convert all of them into integer.
Some of codes read as follows. Please print your results according to this format.
```
print "The difference is:%d" % (myMath.subtraction(maxNum,minNum)),
print "The summation is:%d" % (myMath.add(maxNum,minNum)),
```

## Example
```
$ python2 CountLetters.py Firefox,is,having,trouble,recovering,your,windows,and,tabs
y:1 x:1 w:2 v:2 u:2 t:2 s:3 r:5 o:5 n:4 l:1 i:5 h:1 g:2 f:1 e:4 d:2 c:1 b:2 a:3 F:1
```