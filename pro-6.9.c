#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int i, j;

    for(i=0, j=4; i<5; i++, j--)
        arr2[j] = arr[i];

    for(i=0; i<5; i++)
        arr[i] = arr2[i];

    for(i=0; i<5; i++)
        printf("%d\n", arr[i]);

    return 0;
}
