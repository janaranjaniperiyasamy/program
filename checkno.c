#include <stdio.h>

int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        if(n==i)
        {
            t=1;
        }
    }
    if(t==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
