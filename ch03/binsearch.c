#include <stdio.h>
/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, mid, high;

    low = 0;
    high = n-1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int arr[] = {7, 12, 13, 23, 26, 49, 58, 59};
    printf("Items: ");
    for (int i = 0; i < 8; i++)
        printf("%d ", arr[i]);

    printf("\n");
    int c;
    c = getchar();
    if (c != EOF)
        printf("Result: %d\n", binsearch(c, arr, 8));
    return 0;
}
