#include<stdio.h>
int main()
{
    int ara1[] = {3, 1, 5, 2, 4};
    int ara2[5];
    int i, min_ind, index_2, index, min;
    for(index_2 = 0; index_2<5; index_2++)
    {
        min = 10000;

        for(i=0; i<5; i++)
        {
            if(ara1[i]<min)
            {
                min = ara1[i];
                min_ind = i;
            }
        }
        ara1[min_ind] = 10000;
        ara2[index_2] = min;
    }
    for(i=0; i<5; i++)
    {
        printf("%d\n", ara2[i]);
    }
    return 0;
}
