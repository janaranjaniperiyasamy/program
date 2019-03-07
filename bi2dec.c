#include <stdio.h>

int main()
{
    long long int n,r,t=0,s=1;
    scanf("%lld",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        t=t+(s*r);
        s=s*2;
    }
    printf("%lld",t);

    return 0;
}
