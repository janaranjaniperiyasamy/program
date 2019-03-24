#include <stdio.h>

int main()
{
    int a[100000],b[100000],i,j,t,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
