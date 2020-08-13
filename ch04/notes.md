# Notes on Chapter 4

Code-reuse is one of the desired functionality that eases the life of developers and make sure we are progressing forward and not trying to do the same stuff over and over again.
Functions in C and any other language are mechanism through which it's made fesible to use the code written by someone else through intuitive interface without getting into the nitty gritty detail of the implementation contained thereof. It also makes it easier for developers to maintain the code as the unwanted interactions are minimized through smaller chunks.

A minimal function is dummy() {}
If the return type is omitted, int is assumed. Such a dummy function is helpful during development as a placeholder.

Any expression can follow after return:  return **expression**;
The expression will be converted to the return type of the function if necesary.

