#include<stdio.h>
int main()
{
    int row, col, sum, sum2;
    int num[5][5];
    /*int num[5][5]={
        {6,4,7,8,9},
        {3,7,1,9,9},
        {8,6,4,2,7},
        {2,4,2,5,9},
        {4,1,6,7,3}
        };*/
    printf("Enter 5 row and 5 column values: \n");
    for(row=0; row<5; row++){
        for(col=0; col<5; col++){
            scanf("%d", &num[row][col]);
        }
    }
    for(row=0; row<5; row++)
    {
        sum=0;
        for(col=0; col<5; col++)
            sum = sum + num[row][col];
            printf("Sum of row %d: %d\n", row+1, sum);
    }

    printf("\n");
    for(col=0; col<5; col++)
    {
        sum2=0;
        for(row=0; row<5; row++)
            sum2 = sum2 + num[row][col];
        printf("Sum of column col %d: %d\n", col+1, sum2);
    }


    return 0;
}
