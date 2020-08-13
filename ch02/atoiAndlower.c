#include <stdio.h>

/* atoi: convert s to integer */
int atoi(const char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i]- '0');

    return n;
}

/* lower: convert c to lower case: ASCII only*/
/* for functions independent of character set refer ctype.h header */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int main()
{
    char str[] = "53296";
    printf("Atoi: %d\n", atoi(str));
    printf("Lower: %c\n", lower('F'));
    return 0;
}
