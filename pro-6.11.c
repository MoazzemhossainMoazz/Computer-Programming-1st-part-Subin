#include<stdio.h>
int main()
{
    int ft_mark[10] = {86, 40, 60, 70, 30, 50, 70, 55, 77, 88};
    int st_mark[10] = {56, 60, 70, 30, 50, 60, 40, 77, 80, 34};
    int final_mark[10] = {44, 56, 66, 77, 88, 99, 33, 44, 66, 45};
    int i, marks, count;
    double total_mark[10];

    for(i=0; i<10; i++)
    {
        total_mark[i] = ft_mark[i]/4.0 + st_mark[i]/4.0 + final_mark[i]/2.0;
    }

    for(i=1; i<10; i++)
    {
        printf("Roll no: %d\tTotal marks: %0.0lf\n", i, total_mark[i-1]);
    }

    for(marks = 50; marks<=100; marks++)
    {
        count = 0;
        {
            for(i=0; i<=10; i++)
                if(total_mark[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);

    }
    return 0;
}
