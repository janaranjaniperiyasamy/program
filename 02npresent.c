#include <stdio.h>

int main()
{
   long int n,k,i=0,a[1000],r,j=0,c=0,k1,k2;
    scanf("%ld %ld",&n,&k2);
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
                a[k]='*';
            }
        }
    }
    j=0;
    while(j<=k2)
    {
    for(k1=0;k1<i;k1++)
    {
        if(a[k1]!='*')
        {
        if(a[k1]==j)
        {
            c++;
        }
        }
    }
    j++;
    }
    if(c==k2+1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
