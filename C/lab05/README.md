# Lab 5
## Pre Reading
For some of the exercises in this lab, it may be useful to know a little bit more about how C programs interact with the operating system.

You may know that, when starting a program from the command line, you can specify command line arguments that tell the program more about what you want it to do. When compiling a C program, for example, you might type 'cl hello.c' or 'gcc hello.c', which tell the cl and gcc programs, respectively, to read from a file called hello.c. In C, the command line arguments are passed to the program as arguments of the `main()` function. The complete function protoype for `main()` is:
```
int main(int argc, char **argv)
```

The argc argument contains the number of arguments on the command line, including the name of the program itself. The argv argument is an array of strings containing the arguments in order. So, `argv[0]` is the name of the program, `argv[1]` is the first argument, and so on. Note that these are always strings, so you need to use atoi() and friends if you want to convert them to numbers.

Most compilers allow you to omit the arguments for `main()`, which is why we've been able to use just int `main()` up until now. You only need them if your program uses the arguments.

The return value of `main()` is an integer. This integer is returned to the program that invoked your program, and is usually used to indicate whether or not your program succeeded. By convention, a return value of zero indicates that a program completed without any errors, and a non-zero value indicates that something went wrong. Some programs return specific non-zero values to indicate different kinds of errors. Shell scripts (in Unix) and batch files (in Windows) can use the return values from program to make decisions about what they should do.