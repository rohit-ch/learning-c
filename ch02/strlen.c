#include <stdio.h>

int strlen(char s[])
{
    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int main()
{
    const char msg[] = "warning: ";

    printf("%s%d\n", msg, strlen(msg));
    return 0;
}
