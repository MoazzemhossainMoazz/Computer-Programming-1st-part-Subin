#include<stdio.h>
int main()
{
    int row, col, table2[5][5];
    int table1[5][5]={
        {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25} };

    printf("First table:\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++)
            printf("%d ", table1[row][col]);

            printf("\n");
    }
    printf("\n\n");

    for(row=0; row<5; row++){
        for(col=0; col<5; col++)
            table2[col][row]=table1[row][col];
    }

    printf("Second table:\n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++)
            printf("%d ", table2[row][col]);

            printf("\n");
    }
    return 0;
}
