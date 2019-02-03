#include <stdio.h>

int main()
{
    int n,i,j,r=1,s=0;
    scanf("%d",&n);
    for(i=n+1;i<=n*100;i++)
    {
        r=1;
        for(j=1;j<=i;j++)
        {
            r=r*2;
            if(r==i)
            {
             s=1;   
                break;
            }
        }
        if(s==1)
        {
            break;
        }
    }
    if(s==1)
    {
        printf("%d",r);
    }
    return 0;
}
