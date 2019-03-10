#include<stdio.h>
int main()
{
    int a[10000],i,j,n,b[10000],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        sum=sum+a[i];
        b[j]=sum;
        j++;
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
