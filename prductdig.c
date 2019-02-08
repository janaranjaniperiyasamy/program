#include <stdio.h>

int main()
{
    int a,r,s=1;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        s=s*r;
    }
    printf("%d",s);
    
    return 0;
}
