#include<stdio.h>
void main()
{
long int n,r,i,j,c,fact=1,fact1=1,fact2=1;
scanf("%ld %ld",&n,&r);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
for(i=1;i<=r;i++)
{
fact1=fact1*i;
}
for(i=1;i<=n-r;i++)
{
fact2=fact2*i;
}
c=fact/(fact1*fact2);
printf("%ld",c);
}
