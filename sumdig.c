#include <stdio.h>

int main()
{
    int a,r,t=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        t=t+r;
    }
    printf("%d",t);
    return 0;
}
