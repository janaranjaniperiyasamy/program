#include <stdio.h>


int main()
{
    int x[100],n,i,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(x[i]>x[j])
        {
            t=x[i];
            x[i]=x[j];
            x[j]=t;
        }
            
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",x[i]);
    }

    return 0;
}
