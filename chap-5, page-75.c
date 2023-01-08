#include<stdio.h>
int main()
{
    int a1, a2, b1, b2, c1,c2;
    float x,y;

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

    x = (((b1*c1)-(b1*c2))/((a1*b2)-(a2*b1)));
    y = (((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1)));

    printf("X = %f, Y = %f", x,y);
    return 0;
}
