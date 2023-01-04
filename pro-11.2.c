#include<stdio.h>
int main()
{
    int namta[11][11], i, j, count1=0, count2=0, sum=0;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
                namta[i][j]= i * j;
            printf("%d X %d = %d\n", i, j, namta[i][j] );

            if(namta[i][j]%2==0)
                count1++;

            else if(namta[i][j]%2==1)
                count2++;

            sum= sum + namta[i][j];
        }

        printf("\n\n");
    }
    printf("Number of Even: %d\n", count1);
    printf("Number of Odd: %d\n", count2);
    printf("Sum of arrays: %d\n", sum);
    return 0;
}
