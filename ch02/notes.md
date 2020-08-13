# Notes on Chapter 2

### Building Blocks of Language
* Variables
* Constants
* Declarations
* Operators
* Expressions
* Type

If A program is collection of statements that manipulate data to solve a problem then in general terms, Variables and constants hold the actual data that is manipulated in a program.

Declarations are the way you specify variables and constants and their type and the initial values.

Operators tell how you want to use these values and Expressions are the result of one or combination of more variables and constants with or without the operators.

Type tells what possible value a varibale or constant can hold and what sort of operations can be performed on it.

There are certain rules that variable, constant of function names have to follow within the language constraints. One of them is to usually have the names with 31 or less characters especially for functions or external variables.

The basic data types are:
* char
* int
* float
* double

short and long are qualifiers that can be applied to integers or float to extend their size and precision. But while writing short int it can be only written as int. and long int as long.

The rules for implementaion of short, int and long are that short can be minimun of 16bits and maximum of the size of int. int can have usually 16 or 32 bits and long 32 bits or more. long should always be equalt to or greater than int.

signed or unsigned are qualifiers stating whether a integer can be interpreted as negative/postive or by default as positive.

char are single byte values. thus unsigned char can have 2^8 i.e. 0-255 values. and signed char can range between -128 to 127.

for short (16 bits) 2^16 i.e. 0-65,536 or -32768 to 32767 values.

Talking about float, it's single precision decimal value. what that means is that for a number such as 10.23 you are only clear about the precision of 0.2 and the precision of 0.03 is not certain. therefor float are usually only correct till 1 place after decimal point. You can use more precise value using double or long double.

While writing constant literals few suffixes or prefixes can be used.
By default 1234 is int
L/l for long
UL/ul for unsigned long
F/f for float
by default 123.45 is double unless suffixed with f/F
a literal value leading with 0 is treated as octal
a literal number leading with 0x or 0X is treated as hexadecimal
e.g. 0XFUL is unsigned long hexadecimal representation of 15 and 037 is octal for 31.
character constant is an integer written as 'x'. '\000' is octal whereas '\0xhh' is hexadecimal.

"" is string which is internally represented by character array with last character being '\0' for null character signifying the end of the string. thus string is internally alway one more than the number of characters present within "". "" is empty string, but the strlen returns the size excluding '\0'.

#### Enumerations
enumeration in a list of integers give a string representation. Unless specified otherwise the first value is 0, next is 1 and so on.

e.g. enum boolean { NO, YES }; NO is 0 and YES is 1

enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = 't',
               NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };

enums can be used to generate equences for you, and although a compiler need not check the valid value, since the option is presented they are better alternative than #define in some cases.

#### Declarations

A declaration can be implicit or explicit but before using any variable or function it must be declared somewhere before. If a variable is initialized in it's declaration it's considered as defining the variable as the declaration only tells the name and the type of the value it may hold but definition does the actual allocation of memory for you.

If it's not an automatic variable it is intialized only once but the automatic variables are initialized each time it enters the scope. Thus if explicit initialization is not present for automatic/local variable theya re initialized with garbage value. But the external or static variables are initialized by zero by default.

const specifier tells that the value will not be changed.
e,g, const double pi = 3.141592
const char msg[] = "warning: ";

### Operators
* Arithmetic (*, /, %, +, -)
* Relational (>, >=, <, <=, !=, ==)
* Logical (&&, ||)
* Increment & Decrement (++, --)
* Bitwise (&, |, ^, <<, >>, ~)
* Conditional Expression or Terniary Operator (?:)

### Type conversion
Usually when an operator is appied on different types, type conversion take place. Implicit conversion happens without much issue if it's logical to do so and there is no data loss. But in few cases such as converting float to int or int to short compiler might issue a warning stating the possibility of data loss during conversion.

floats are not automatically converted to double, because by default double is used. The values of type float are used where memory needs to be conserved in large arrays or improving processing time on machine where floating point arithmetic is costly.

Conversion b/w signed and unsigned values are complicated due to it being machine dependent, because they depend on the sizes of various integer types.

Explicit type conversion can be forced via Type Casting. i.e. (type-name) expression.

Prefix Increment or Decrement Operator modify yield the result before the value is to be used, so
n = 5; x = ++n; implies n = 6 and x = 6
whereas, if n = 5; x = n++; implies n = 6, and x = 5.

### Note
1. Automatic variables are the variable that are declared in a block. It's synonymous to local. These variables allocat memory upon entry to that block and free the occupied memory as soon as it goes out of that scope or exits the block.
2. Char is just a small integer of 1 byte.
3. Language doesn't specify whether variabke of type char are signed or unsigned. When a char is converted to int whether it will produce a negative integer depends from machine to machine in architecure. e.g. In one machine if the leftmost bit of char is 1 it's treated as negative integer, whereas in other a char is promoted to int by padding the left with zero thus it's always positive.
4. In test conditions of if, while, for etc true means non-zero.
5. The increment and decrement operators can only be applied to variables.
