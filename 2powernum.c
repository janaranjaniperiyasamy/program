#include <stdio.h>

int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i*i==a)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
