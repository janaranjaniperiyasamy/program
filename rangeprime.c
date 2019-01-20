#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,c=0;
    clrscr();
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        c=0;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
    printf("%d ",i);
        }
    }
    getch();
}
