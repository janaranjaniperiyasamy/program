#include <stdio.h>

int main()
{
    long int n,r,t=0,s=1;
    scanf("%ld",&n);
    while(n)
    {
        r=n%2;
        n=n/2;
        t=t+(s*r);
        s=s*10;
    }
    printf("%ld",t);

    return 0;
}
