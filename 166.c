#include<stdio.h>
void main()
{
int a,b,g=0,f1=1,f2=1,i,m;
scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
    f1=f1*i;
}
for(i=1;i<=b;i++)
{
    f2=f2*i;
}
       for(i=2;i<=f1+f2;i++)
       {
           if((f1%i==0)&&(f2%i==0))
           {
               m=i;
           }}
           printf("%d",m);
}
