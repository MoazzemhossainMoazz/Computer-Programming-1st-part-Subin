#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{

    char bin[30];
    int len, dec, power, i;
    printf("Enter a Binary value: ");
    scanf("%s",&bin);

    dec = 0;
    len=strlen(bin);
    power=len-1;

    for(i=0; i<len; i++)
    {
        dec=dec+(bin[i]-'0')*pow(2,power);
        power--;
    }
    printf("Decemel value is: %d\n", dec);
    return 0;
}
