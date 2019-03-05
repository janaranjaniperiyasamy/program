#include <stdio.h>

int main()
{
    int n,a[1000],i,c=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        else
        {
            c1++;
        }
    }
    if(c==n-1)
    {
        for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    }
    else
    {
        for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
        }
        else
        {
            printf("%d",a[i]);
        }
    }
    }
    return 0;
}
