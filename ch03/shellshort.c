#include <stdio.h>

/* shellshort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{

    int gap, i, j, temp;

    int count = 1;;

    for(gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
                printf("iteration %d\n", count++);
            }
}

int main()
{
    int arr[] = {13, 7, 53, 43, 57, 11, 3, 103};
    printf("Input Array: [");
    for (int i=0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("]\n");
    shellsort(arr, 8);
    printf("Output Array: [");
    for (int i=0; i < 8; i++)
        printf("%d ", arr[i]);
    printf("]\n");
    return 0;
}
