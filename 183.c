#include <stdio.h>

int main()
{
    int a[100000],i,j=0,b[10000],n,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
            
        }
        else
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0;i<c;i++)
    {
        b[j]=0;
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
