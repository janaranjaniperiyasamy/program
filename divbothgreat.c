#include <stdio.h>

int main()
{
    int n,k,c=1,max=0,s,i,r;
    scanf("%d %d",&n,&k);
    r=n>k?n:k;
    for(i=0;i<r;i++)
    {
        if(n%c==0 && k%c==0)
        {
            s=c;
            c++;
        }
        else
        {
            c++;
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
    return 0;
}
