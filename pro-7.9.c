#include<stdio.h>
void test_func(int ara[])
{
    ara[0] =100;
    return 0;
}
int main()
{
    int ara[] = {1, 2, 3, 4, 5};
    printf("\%d\n", ara[0]);
    test_func(ara);
    printf("%d\n", ara[0]);

    return 0;
}
