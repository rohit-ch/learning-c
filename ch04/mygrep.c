/*
Problem: Print each line of input that contains a particular "pattern" or string of characters.
Algorithm:
    while (there is another line)
        if (the line contains the pattern)
            print it
*/
#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int getLine(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

/* find all lines matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (getLine(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0) {
        printf("%s", line);
        found++;
    }

    return found;
}

/* getLine: get the line into s, return legth */
int getLine(char s[], int max)
{
    int c, i;

    i = 0;
    while(--max > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
        return i;
    }
    return -1;
}
