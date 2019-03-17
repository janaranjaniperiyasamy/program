#include <stdio.h>

void main()
{
int n1,a[10000],i,j,c=0,x;
scanf("%d",&n1);
for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
for(i=1;i<=n1;i++)
{
    c=0;
    for(j=0;j<n1;j++)
    {
        
        if(a[j]%i==0)
        {
           c++;
        }
      
    }
    
    if(c==n1)
    {
    x=i;
   
    }
}
   printf("%d",x);
 }
