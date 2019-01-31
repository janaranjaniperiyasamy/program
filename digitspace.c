#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,p=1,l=0,b;
clrscr();
scanf("%d",&a);
b=a;
while(b)
{
b=b/10;
l++;
}
while(l)
{
p=p*10;
l--;
}
while(a)
{
p=p/10;
r=a/p;
a=a%p;
printf("%d ",r);
}
getch();
}
