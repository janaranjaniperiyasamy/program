#include <stdio.h>

int main()
{
    int a[1000],i,j=1,n,min,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(j=0;j<n+1-2;j++)
    {
        min=0;
    for(i=0;i<n;i++)
    {
        if(min<a[i])
        {
            min=a[i];
            t=i;
        }
    }
    a[t]=NULL;
    }
    printf("%d",min);
return 0;
}
