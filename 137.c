#include <stdio.h>

int main()
{
    long int n,r,t[1000],i,s=1,l=0,v=0,n1;
    scanf("%ld",&n);
    n1=n;
    while(n)
    {
        r=n%2;
        n=n/2;
        t[i]=r;
        i++;
        s=s*10;
    }
    t[i]=5;
    for(i=0;t[i]!=5;i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        v++;
        if(t[i]==1)
        {
            if(n1%2==0)
            {
            printf("%d",v+1);
            break;
            }
            else
            {
                printf("%d",v);
            break;
            }
        }
    }

    return 0;
}
