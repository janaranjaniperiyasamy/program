#include <stdio.h>

int main()
{
    int a[10000],i,n,max=0,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        else
        {
            if(max<c)
            {
                max=c;
            }
            c=1;
        }
    }
    printf("%d",max);
    return 0;
}
