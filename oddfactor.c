#include <stdio.h>

int main()
{
    int i,j,a[100],n1,k=0;
    scanf("%d",&n1);
    for(i=0;i<=n1;i++)
    {
        j=0;
        while(j<=n1)
        {
        if(i*j==n1)
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
        if(a[i]%2!=0)
        {
        printf("%d ",a[i]);
        }
    }
return 0;
}
