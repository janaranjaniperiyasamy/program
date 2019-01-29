#include <stdio.h>

int main()
{
    int n,t=0;
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        t++;
    }
    printf("%d",t);
    return 0;
}
