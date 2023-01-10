#include<stdio.h>
int test(int x)
{
    int y = x;
    x = 2*y;
    return x*y;
}


int main()
{
    int a=5, b=6, c=7;
    c = test(a);
    printf("%d %d %d", a, b, c);
    return 0;
}
