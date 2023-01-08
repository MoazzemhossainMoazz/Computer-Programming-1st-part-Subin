#include<stdio.h>
int main()
{
    float v,u, a, t;

    printf("Initial velocity: ");
    scanf("%f", &u);

    printf("Acceleration: ");
    scanf("%f", &a);

    printf("Time: ");
    scanf("%f", &t);

    v = u + a * t;
    printf("Force: %f", v);

    return 0;
}
