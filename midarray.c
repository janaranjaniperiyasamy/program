#include <stdio.h>


int main()
{
    int c[100],n,i,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(c[i]>c[j])
        {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
        }
            
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==n/2)
        {
    printf("%d ",c[i]);
    }}

    return 0;
}
