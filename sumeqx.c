#include <stdio.h>

int main()
{
    int a[1000],i,j,n,x,c=0;
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                c=1;
            }
        }
    }
if(c==1)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
