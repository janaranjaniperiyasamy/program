#include <stdio.h>

int main()
{
   long int n,i=0,r,a[1000],c,k;
    scanf("%ld",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
        k=i;
    }
    c=a[0]+a[k-1];
    printf("%ld",c);
    return 0;
}
