#include <stdio.h>

int main()
{
    int n,k,s;
    scanf("%d %d",&n,&k);
    s=n+k;
    if(s%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
