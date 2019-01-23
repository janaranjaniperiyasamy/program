#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,f=1;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("%d",f);
    getch();
}
