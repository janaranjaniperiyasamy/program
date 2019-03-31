#include <stdio.h>
int main()
{
    int a[10000],b[10000],i,j,n,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(a[i]==b[j])
        {
            r++;
        }
        j--;
    }
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
