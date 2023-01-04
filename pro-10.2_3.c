#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i, root;

    if(n == 2)
        return 1;
    if(n%2 == 0)
        return 0;
    root = sqrt(n);
    for(i=3; i<=root; i+=2){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(1){
        printf("Enter a number: \n");
        scanf("%d", &n);

        if(n == 0)
            break;

        if(1 == is_prime(n))
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
    return 0;
}
