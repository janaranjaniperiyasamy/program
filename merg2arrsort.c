#include <stdio.h>

int main()
{
    int n,m,a[1000],b[10000],c[10000],i,j,temp;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        c[j]=b[i];
        j++;
    }
    for(i=0;c[i]!=NULL;i++)
    {
        for(j=i+1;c[j]!=NULL;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[j];
                c[j]=c[i];
                c[i]=temp;
            }
        }
    }
    for(i=0;c[i]!=NULL;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
