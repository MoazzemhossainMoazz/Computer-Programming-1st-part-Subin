#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{

    char bin[40];
    int i, power, len;

    printf("Enter a binary number: ");
    scanf("%s", &bin);

    int dec=0;
    len=strlen(bin);
    power=len-1;
    for(i=0; i<len; i++)
    {
        dec += bin[i]*pow(2,power);
        power--;
    }
    printf("The decimal value is: %d\n", dec);
    return 0;
}
