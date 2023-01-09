#include<stdio.h>

    int add( num1, int num2)
    {
        int sum = num1 + num2;
        return sum;
    }

    int main()
    {
        int a,b,c;

        a = b = 2.5;
        c = add(a,b);
        printf("%d\n", c);

    return 0;
    }

