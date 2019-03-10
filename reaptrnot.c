
#include <stdio.h>

int main()
{
    int n,i=0,r,j,a[1000],k,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
