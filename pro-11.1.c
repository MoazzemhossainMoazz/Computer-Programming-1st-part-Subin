#include<stdio.h>
int main()
{
    int col, marks[4][10], i, j ;
    for(i=0; i<4; i++){
    for(j=0; j<10; j++){
        printf("Enter roll %d mark:", j);
        scanf("%d",&marks[i][j]);
    }
    }
    for(col=0; col<10; col++){
        marks[3][col]= (marks[0][col]/4.0) + (marks[1][col]/4.0) + (marks[2][col]/2.0);
        printf("Rool %d mark is: %d\n", col+1, marks[3][col]);
    }
    return 0;
}
