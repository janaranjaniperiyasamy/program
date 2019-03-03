#include <stdio.h>

int main()
{
    int a[1000],b[10000],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                a[i]=NULL;
                b[j]=NULL;
            }
        }
    }
    return 0;
}
