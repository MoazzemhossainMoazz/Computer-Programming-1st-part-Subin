#include<stdio.h>
int main()
{
    int row;
    char nam[7][11]={"Bangladesh", "Pakistan", "India", "Sri Lanka", "Maldip", "Vutan", "Nepal"};

    for(row=0; row<7; row++){
        printf("%s\n", nam[row]);
    }
    return 0;
}
