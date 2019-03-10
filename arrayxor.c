#include <stdio.h>

int main()
{
    int a[1000],n,i,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r=a[0];
    for(i=0;i<n-1;i++)
    {
            r=(r^a[i+1]);
    }
    printf("%d",r);
    return 0;
}
