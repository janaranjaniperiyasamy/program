#include <stdio.h>

int main()
{
    int a,r,sum=0,t;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        t=r*r;
        sum=sum+t;
    }
    printf("%d",sum);

    return 0;
}
