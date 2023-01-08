#include<stdio.h>
int main()
{
    int ara[4] = {1, 2, 3, 4};

    ara[0] = 100;
    ara[2] = 200;
    ara[5] = 300;
    ara[4] = 400;

    printf("%d, %d, %d, %d, %d\n", ara[0], ara[1], ara[2], ara[3], ara[4]);
    return 0;
}
