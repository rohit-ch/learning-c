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

for loop is more compact and generatized form of while loop. Thus, it's appropriate where initialization and increment are single statements and logically related.

### Symbolic Constants
As the Zen of Python says, "Readability Counts". It's even more true for C Programs, this burying literal values in code can make it less readable to human, since it's not conveying much info or the semantic behind it.

One way to deal with magic numbers is to give them meaningful names; which can be achieved using the #define operative, e.g.:
    #define *name* *replacement list*

It's a symbolic name because anywhere compile encounters the name, it will be replaced by the value it represents. They are not variables and they do not appear in declarations. As a convention, they are written in uppercase so they can be readily distinguished from the lower case variable names.

### Character Input and Output
Text input or input, regardless of where it originates and where it goes to, is dealt with as stream of characters. A *text stream* is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character.

Some common functions provided for reading and writing characters are:
    * getchar
    * putchar

#### File Copying
While reading a stream of characters using *getchar* a *char* or any integer type can be used. The important thing to not is while using getchar to read multiple characters from a file, distinguishing the EOF becomes difficult as char only hold single byte and the value returned by getchar for EOF is too bg to be stored successfully in char type. Thus using int.

EOF is an integer defined in stdio.h

#### Functions
Encapsulation mechanism for computation logic, which can be used without worrying about the implementation. Focus is more on what rather than how. Although functions enable reuse of some code, often some code is still put inside a function to clarify the logic even if it might not be used more than once.

Important to note is that once a function have been declared it's definition can appear anywhere, in one file or multiple files in any order. But a definition can't be split across two different files.

Another distinction that is usually made is between arguments and parameters. parameters are the formal arguments used during the function definition/declaration. Actual arguments or arguments are the values passed to function while actually calling it in program.

    * return-type function-name(parameter declaration, if any)
    * {
    *       declarations
    *       statements
    * }

The function declarations are also called prototype. A definition and prototype should match correctly in their signature.

#### Arguments - Call By Value
Anything done to the actual arguments done inside the function doesn't affect the value outside. Since copy of the value is passed. If the need arises where you need to modify actual value then while passing the value the address of the value must be passed( pass by pointer). This requires changes in the function prototype which should declare explicitly that the parameter is of pointer type.

### External Variables
Since function parameters and declarations within functions are local to it's scope, if a varibale has to be shared across multiple functions it can be defined globally as external variable.

The requirements are that it must be defined exactly once. It also must be declared inside each function that uses it unless it's implicit by context. What this means is that if the global variable has been defined before the functions that uses it, then extern is redundant.

Also if a global is variable is declared in file1 and file2 and file3 are using that vriable then the extern keyword is required. Typically all such declarations and definitions are placed in a separate header file (.h) and included in the source of other files as #include <file.h>

### To Remember
1. Integer division truncates; any fractional part is discarded.
2. During string interpolation using printf all % should macth properly to their correct values. printf is not part of the C language; but instead, it's defined by ANSI standard therefore, its behaviour should be consistent across different compilers which adhere to ANSI standard.
3. I/O library isn't part of the C language, that's why it needs to be included in the program header to use its functionalities.
4. AND (&&) and OR (||) operators are evaluated from left to right and it is guaranteed that evaluation will stop as soon as the the truth or falsehood is known.
5. There is no exponentiation operator ** instead pow(x, y) is provided by standard library.
6. Definition refer to the place where the variable is created or assigned storage.
7. Declaration refers to the places where the nature of the variable is stated but no storage is allocated.
---
>Terminilogies:
> * Function
> * Variable
> * Library
> * Function Arguments/Parameters
> * Character String or String Constant

String Constants: A sequence of characters in double quotes is considered a character string or string constant. To facilitate new lines, tabs and other special symbols within this character sequesnce, escape characters are provided, which are interpreted in special manner by the compiler; e.g. to output a new line within a string if a new line is inserted within the double quotes in program text, the code fails to compile. TO achieve that \n should be used as an escape character. Escape here is aptly used to signify that you are escaping the default meaning behind the character.
