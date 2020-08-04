#include <stdio.h>

int main()
{
    int nwhites, ntabs, nlines;
    int c;

    nwhites = ntabs = nlines = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++nwhites;
        else if (c == '\t')
            ++ntabs;
        else if (c == '\n')
            ++nlines;
    }

    printf("blanks = %d, tabs = %d, newlines = %d\n", nwhites, ntabs, nlines);
    return 0;
}
