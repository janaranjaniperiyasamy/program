#include<stdio.h>

int main()
{
int p,a,i,j,p1,a1,c=0;
scanf("%d %d",&p,&a);
for(i=0;i<p;i++)
{
    for(j=0;j<p;j++)
    {
     p1=2*(i+j);
     a1=i*j;
     if(p==p1 && a==a1)
     {
         c=1;
     }
    }
}
if(c==1)
{
    printf("yes");
}
else
{
    printf("no");
}

return 0;
}
