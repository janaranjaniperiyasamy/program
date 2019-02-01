#include <stdio.h>

int main()
{
    int a[100],i,r=0,n,k;
     scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            r++;
        }
    }
    printf("%d",r);
    return 0;
}
