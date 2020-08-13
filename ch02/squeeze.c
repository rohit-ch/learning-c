#include <stdio.h>
/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

int main()
{
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("Before: %s\n", str);
    squeeze(str, 'l');
    printf("After: %s\n", str);
    return 0;
}
