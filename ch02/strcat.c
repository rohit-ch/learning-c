#include <stdio.h>

/* strcat: concatenate t at the end of s; s must be big enough */
void strcat(char s[], char t[])
{
    int i, j;
    
    i = j = 0;
    while (s[i] != '\0')
        i++;

    while((s[i++] = t[j++]) != '\0')
        ;

}

int main()
{
    char str1[20] = "Hello, ";
    printf("Before: %s\n", str1);
    strcat(str1, "Rohit");
    printf("After: %s\n", str1);
    return 0;
}
