#include<stdio.h>
int main()
{

char c;
    int x, y;
    printf("Enter a initial position: ");
    scanf("%d %d", &x, &y);

    while(1)
    {
        scanf("%c",&c);

        if(c=='S')
            break;
        else if(c=='U')
            x--;
        else if(c=='D')
            x++;
        else if(c=='R')
            y++;
        else if(c=='L')
            y--;
    }
    printf("Final position is: %d, %d\n", x, y);
    return 0;
}
