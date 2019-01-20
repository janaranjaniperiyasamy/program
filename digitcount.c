#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r,c=0;
    clrscr();
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        c++;
    }
    printf("%d",c);
    getch();
}
