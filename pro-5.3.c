#include<stdio.h>
int main()
{
    int a1, a2, b1, b2, c1,c2;
    float x,y, d;

    printf("\nA1 = ");
    scanf("%d",&a1);

    printf("\nA2 = ");
    scanf("%d",&a2);

    printf("\nb1 = ");
    scanf("%d",&b1);

    printf("\nb2 = ");
    scanf("%d",&b2);

    printf("\nc1 = ");
    scanf("%d",&c1);

    printf("\nc2 = ");
    scanf("%d",&c2);

    d = (a1 * b2 - a2 * b1);

    if(d == 0)
    {
        printf("not possible.");
    }
    else
    {
    x = (b2 * c1 - b1 * c2) / d;
    y = (a1 * c2 - a2 * c1) / d;


    printf("X = %f, Y = %f", x,y);
    }
    return 0;

}
