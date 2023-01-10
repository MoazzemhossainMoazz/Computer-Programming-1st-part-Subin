/*//find summation of values
#include<stdio.h>
int main()
{
    int ara[] = {3, 4, 5, 6, 7};
    int n=5;
    int sum = find_sum(ara,n);
    printf("%d\n",sum);
    return 0;
}
int find_sum(int ara[], int n)
{
    int i, sum=0;
    for(i=0; i<n; i++)
        sum=sum+ara[i];
    return sum;
}*/



#include<stdio.h>
double find_sum(int ara[], int n)
{
    int i, sum=0;
    double avg;
    for(i=0; i<n; i++)
    {
        sum=sum+ara[i];

    }
    avg=sum/n;


    return avg;
}

int main()
{
    int ara[] = {3, 4, 5, 6, 7};
    int n=5;
    //dsd+int sum = find_sum(ara,n);
    double avg = find_sum(ara, n);
    //printf("%d\n",sum);
    printf("%lf\n", avg);
    return 0;
}
