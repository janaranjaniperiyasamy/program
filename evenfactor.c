#include <stdio.h>

int main()
{
    int i,j,a[100],n,k=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        j=0;
        while(j<=n)
        {
        if(i*j==n)
        {
         a[k]=i;
         k++;
         break;
        }
        else
        {
            j++;
        }
        }
    }
    a[k]=NULL;
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]%2==0)
        {
        printf("%d ",a[i]);
        }
    }
return 0;
}
