#include <stdio.h>

int main()
{
    int  a[10000],n,i,j,t,temp;
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    for(i=t;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        
        }    
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;
}
