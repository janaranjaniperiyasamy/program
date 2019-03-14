#include <stdio.h>

int main()
{
    long int a,b,c,d,t=1;
    scanf("%ld %ld %;d",&a,&b,&c);
    while(b)
    {
    t=t*a;
    b--;
    }
    d=t%c;
    printf("%ld",d);

    return 0;
}
