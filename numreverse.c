#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
    getch();
}
