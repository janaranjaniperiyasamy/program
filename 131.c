#include <stdio.h>
int main()
{
    int n,r,t=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        if(r%2!=0)
        {
            t=t+r;
        }
    }
    if(t%2==0)
    {
        printf("E");
    }
    else
    {
        printf("O");
    }
    return 0;
}
