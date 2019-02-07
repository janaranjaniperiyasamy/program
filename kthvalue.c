#include<stdio.h>
void main()
{
    int a[100],k,i,n;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==k-1)
        {
            printf("%d",a[i]);
        }
    }
}
