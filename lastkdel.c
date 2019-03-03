#include <stdio.h>

int main()
{
    int a[10000],n,i,k;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i>=n-k)
        {
            a[i]=NULL;
        }
    }
    for(i=0;a[i]!=NULL;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
