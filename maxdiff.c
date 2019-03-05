#include <stdio.h>

int main()
{
    int n,a[1000],i,j,max=0,l,s,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
    l=a[i]>a[j]?a[i]:a[j];
    s=a[i]<a[j]?a[i]:a[j];
    r=l-s;
    if(max<r)
    {
        max=r;
    }
        }
    }
    printf("%d",max);
    return 0;
}
