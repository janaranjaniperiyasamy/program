#include <stdio.h>

int main()
{
    long int n,r,t=0,s=1,c=0;
    scanf("%ld",&n);
    if(n==0)
    {
        c=1;
    }
    while(n)
    {
        r=n%2;
        n=n/2;
        c++;
    }
    printf("%ld",c);

    return 0;
}
