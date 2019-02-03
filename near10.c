#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    while(1)
    {
        n=n+1;
        if(n%10==0)
        {
            i=n;
            break;
        }
    }
    printf("%d",i);
    return 0;
}
