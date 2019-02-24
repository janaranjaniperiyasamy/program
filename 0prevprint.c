#include <stdio.h>
#include<string.h>

int main()
{
    int a[1000],n,i,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            t=i;
        }
    }
    for(i=0;i<t;i++)
    {
        if(a[i]!=0)
        {
        printf("%d ",a[i]);
        }
    }
return 0;
}
