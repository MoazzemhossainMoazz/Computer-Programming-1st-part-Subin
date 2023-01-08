#include<stdio.h>
int main()
{
    int i, n, sum=0;

    printf("Enter number of value: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
    sum = sum+i;
    }
    printf("Summation is: %d", sum);
    return 0;
}
