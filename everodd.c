#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a%2==0)
{
printf("even");
}
else if(a%2!=0)
{
printf("odd");
}
else
{
printf("invalid");
}
getch();
}
