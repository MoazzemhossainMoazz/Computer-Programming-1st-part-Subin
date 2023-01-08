#include<stdio.h>
int main()
{
    int a, b, gcd;

    printf("Enter 2 number: ");
    scanf("%d%d", &a,&b);

    if(a==b)
        printf("GCD : %d", a);
    else if(a>b)
    {
        if(a%b==0)
            printf("GCD is: %d", a);
        else
            ("GCD is: %d", a*b);
    }
    else
    {
        if(b%a == 0)
            printf("GCD is: %d", b);
        else
            ("GCD is : %d", b*a);
    }
    return 0;
}


///baby blue or pink bird
