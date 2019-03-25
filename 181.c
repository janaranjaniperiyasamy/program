#include <stdio.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    if((n%3==0) || (n%7==0) || (n%(3+7)==0))
    {
        c++;
    }
    if(c>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
