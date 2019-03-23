
#include <stdio.h>

int main()
{
    int a[1000],k,n,i,c=0,r=0,r1,r2;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c=1;
        }
    }
if(c==1)
{
    printf("%d",k);
}
else
{
    r=k-a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
        r1=k-a[i];
        if(r1<r)
        {
            r=r1;
            r2=a[i];
        }
        }
    }
    printf("%d",r2);
}
    return 0;
}
