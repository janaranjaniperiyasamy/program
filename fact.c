#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,fact=1;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    getch();
}
