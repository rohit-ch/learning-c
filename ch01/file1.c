#include <stdio.h>

/* read a character
      while (character is not the end-of-file indicator)
          output the character just read
          read a character */

int main ()
{
  int c;

  c = getchar();
  while(c != EOF) {
    putchar(c);
    c = getchar();
  }

  return 0;
}
