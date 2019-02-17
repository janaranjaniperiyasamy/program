#include <stdio.h>

int main()
{
    int a[100],i,j,n,c,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            
        }
        if(c==1)
        {
            
            b=a[i];
        }
    }
    printf("%d",b);
    return 0;
}
