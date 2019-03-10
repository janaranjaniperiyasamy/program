#include<stdio.h>
int main()
{
    int a[10000],i,j=0,n,b[10000],c[10000],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        b[j]=sum;
        j++;
    }
    j=0;
    sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        c[j]=sum;
        j++;
    }
    if(n==1)
    {
        printf("%d ",a[i]);
    }
    else
    {
    i=0;
    while(i<n)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",b[i]+c[j]);
            i++;
            
        }
    }
    }
    return 0;
}
