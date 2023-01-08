/*//find max value using make function
#include<stdio.h>
int find_max(int ara[], int n);
int main()
{
    int ara[50], i, n;
    printf("Enter how many number: ");
    scanf("%d", &n);
    printf("Enter values: ");
    for(i=0; i<n; i++)
    scanf("%d", &ara[i]);
    //int ara[] = { 1, 2, 3, 4, 5};
    //int n=5;
    int max = find_max(ara,n);
    printf("The maximum value is: %d\n",max);
    return 0;
}
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(ara[i]>max)
            max = ara[i];
    }
    return max;
}*/

//find the maximum value use function
#include<stdio.h>
int find_max(int ara[], int n);
int main()
{
    int ara[] = {1, 2, 3, 6, 4};
    int n= 5;
    int max = find_max(ara, n);
    printf("%d\n", max);
    return 0;
}
int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;
    for(i=0; i<n; i++){
        if(ara[i]>max)
        max = ara[i];
    }
    return max;

}
