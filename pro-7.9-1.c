#include<stdio.h>
double area(int r)
{
    double area;
    area = 3.1416*r*r;
    return area;
}
int main()
{
    int r;
    double a;

    printf("Enter R value: ");
    scanf("%d", &r);
    a=area(r);
    printf("Area is: %lf\n", a);
    return 0;

}
