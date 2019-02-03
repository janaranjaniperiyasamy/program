#include <stdio.h>

int main()
{
    int n,k=0,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k=1;
        }
    }
    if(k==0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    return 0;
}
