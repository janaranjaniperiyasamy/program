#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,r;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=5;i++)
    {
        r=i*a;
        printf("%d ",r);
    }
    getch();
}
