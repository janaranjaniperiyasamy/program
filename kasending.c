#include <stdio.h>

int main()
{
    int a[1000],b[10000],i,j=0,n,k,temp;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
            if(a[i]<k)
            {
                b[j]=a[i];
                j++;
            }
    }
    for(i=0;b[i]!=NULL;i++)
    {
        for(j=0;b[j]!=NULL;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;b[i]!=NULL;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
