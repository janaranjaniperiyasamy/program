#include <stdio.h>

int main()
{
    int a[1000],n,i,j,r,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r=(a[i]&a[j]);
            if(max<r)
            {
                max=r;
            }
        }
    }
    printf("%d",max);
    return 0;
}
