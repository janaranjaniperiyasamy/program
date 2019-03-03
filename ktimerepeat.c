#include <stdio.h>

int main()
{
    int a[10000],i,n,j,k,c;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==k)
        {
            printf("%d ",a[i]);
        }
    }
    
    return 0;
}
