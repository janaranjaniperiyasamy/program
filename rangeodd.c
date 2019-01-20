#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    getch();
}
