#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i;
    clrscr();
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
