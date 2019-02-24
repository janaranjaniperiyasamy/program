#include<stdio.h>
int main()
{
int n,k,sum=1,c=0;
scanf("%d %d",&n,&k);
while(sum<=n)
{
sum=sum*k;
if(sum==n)
{
    c=1;
    break;
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
