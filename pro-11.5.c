#include<stdio.h>
#include<string.h>
int main()
{
    int row, col, name_length;
    //char src[7][11];
    char src[7][11]={"Bangladesh", "inda", "pak", "nep", "bhu", "sri", "kat"};
    /*for(row=0; row<7; row++){
        for(col=0; col<11; col++)
            scanf("%[^\n]", &src[row]);
    }*/

    for(row=0; row<7; row++){
        name_length = strlen(src[row]);
        for(col=0; col<name_length; col++)
            printf("srcc [%d][%d]= %c\n", row, col, src[row][col]);

            printf("\n");
    }

    return 0;

}
