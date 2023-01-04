#include<stdio.h>
#include<string.h>
int main()
{
    int row, col, name_length;
    char sarc[7][11] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};

    for(row=0; row<7; row++){
        name_length=strlen(sarc[row]);
                for(col=0; col<name_length; col++){
            printf("Sarcc[%d][%d] = %c\n", row, col, sarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}
