#include<stdio.h>
void main()
{
int a,b,g=0;
scanf("%d %d",&a,&b);
g=(a<b)?a:b;
while(1)
{
if(a%g==0 && b%g==0)
{
printf("%d",g);
break;
}
g--;
}
}
