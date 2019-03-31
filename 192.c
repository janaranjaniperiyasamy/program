#include <stdio.h>
int main()
{
    int a[10000],i,j,n,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]<a[i+1])
            {
                r++;
            }
        }
        else
        {
             if(a[i]>a[i+1])
            {
                r++;
            }
        }
    }
    r=r+1;
if(r==n)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
