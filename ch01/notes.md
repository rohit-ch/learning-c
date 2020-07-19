# Notes on Chapter 1

>"The only way to learn a new programming language is by writing programs in it." -K&R

A typical C programming activity involves following steps:
* Write program text
* Compile
* Load
* Run
* Verify output

Although the program text itself can we written in any platform, executing it depends on the platform itself; e.g. the compiler itself, the os and architecture on which it is being compiled on, and where will this program be run. A program that has been built for Windows will not run directly on Linux and vice-versa.

### Function
Every c program is a composition of statements that are then compiled into the native language of underlying machine and upon execution of the program are executed by the platform. To that end various constructs are fashioned into the language. One of those construct is function. A function is a bunch of statements that a re logically grouped under a name, which can be used to refer to those group of statements via the name of function, instead of writing those statements repeatedly throughout your code.

One such special function that is a must for a valid C executable is "main". It's the entrypoint to program execution and follows some specific guidelines.

For example:

  #include <stdio.h>
  main()
  {
    printf("hello, world\n");
  }

The above code if compiled directly on Linux using gcc compiler (i.e. gcc hello.c), the compilation step produces following warning although your code gets compiled successfullyr:
  > hello.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]

The ask is that your main function should by default return integer value (although in this case compiler considers that implicit), but as a best practice one should always make it clear explicitly. Therefore the valid code would be:

  #include <stdio.h>
  int main()
  {
    printf("hello, world\n");
    return 0;
  }

### Variables and Expressions
Variables are used to store a value. In C, all variables must be declared before use.
A declaration announces the properties of a variable; it consists of a name and a type. A type is to signify how the data stored within the variable should be treated and how it can be used in other expressions throughout the program.

There are various data types:
* char (a single byte)
* short (short integer)
* int (integer)
* long (long integer)
* float (floating point)
* double (double-precision foating point)

The size of these types is machine dependent.

Other types include:
* arrays
* structures
* unions
* pointers
* functions

Looping Construct: 

    * while ( condition ) { /* bunch of statements */ }
    * for (initialization; condition; increment/decrement) { /* bunch of code line */ }

### To Remember
1. Integer division truncates; any fractional part is discarded.
2. During string interpolation using printf all % should macth properly to their correct values. printf is not part of the C language; but instead, it's defined by ANSI standard therefore, its behaviour should be consistent across different compilers which adhere to ANSI standard.
3. I/O library isn't part of the C language, that's why it needs to be included in the program header to use its functionalities.

---
>Terminilogies:
> * Function
> * Variable
> * Library
> * Function Arguments/Parameters
> * Character String or String Constant

String Constants: A sequence of characters in double quotes is considered a character string or string constant. To facilitate new lines, tabs and other special symbols within this character sequesnce, escape characters are provided, which are interpreted in special manner by the compiler; e.g. to output a new line within a string if a new line is inserted within the double quotes in program text, the code fails to compile. TO achieve that \n should be used as an escape character. Escape here is aptly used to signify that you are escaping the default meaning behind the character.
