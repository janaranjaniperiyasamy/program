#include<stdio.h>
void main()
{
int a,b,n=0;
scanf("%d %d",&a ,&b);
n=(a>b)?a:b;
while(1)
{
if(n%a==0 && n%b==0)
{
printf("%d",n);
break;
}
n++;
}
}
