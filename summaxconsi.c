
#include <stdio.h>

int main()
{
    int a[10000],i,n,min,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
            if(min>a[i])
            {
                min=a[i];
            }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=min)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return 0;
}
