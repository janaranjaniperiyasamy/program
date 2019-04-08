#include <stdio.h>

int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    if((a=='P' && b=='P')|| (a=='R' && b=='R')|| (a=='S' && b=='S'))
    {
        printf("D");
    }
    if((a=='P' && b=='R') || (a=='R' && b=='P'))
    {
        printf("P");
    }
    if((a=='R' && b=='S') || (a=='S' && b=='R'))
    {
        printf("R");
    }
    if((a=='S' && b=='P') || (a=='P' && b=='S'))
    {
        printf("S");
    }

    return 0;
}
