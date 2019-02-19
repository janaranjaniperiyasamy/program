#include <stdio.h>

int main()
{
    int n,k,a[1000],b[1000],i,j,max=0,c[100],k1=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<k;i++)
    {
    a[n]=b[i];
    n++;
    max=0;
    for(j=0;j<n;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
    }
    c[k1]=max;
    k1++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
