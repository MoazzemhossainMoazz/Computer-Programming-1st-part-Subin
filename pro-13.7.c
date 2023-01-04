#include<stdio.h>
void encrypt(char msg[])
{
    int i, n;

    for(i=0; i<n; i++)
    {
        if(msg[i] >= 'a' && msg[i] <= 'z')
            msg[i] = msg[i] + 1;
        else if(msg[i] >= 'A' && msg[i] <= 'Z')
            msg[i] = msg[i] + 1;
    }
}

int main()
{
    while(1){
    char s[80];
    printf("Enter a string: ");
    scanf("%s", &s);
    encrypt(s);
    printf("%s\n", s);
    }
    return 0;
}

