#include <stdio.h>

int main()
{
    int a,b,c,r=0,i;
    scanf("%d",&b);
    scanf("%d %d",&a,&c);
    for(i=a+1;i<c;i++)
    {
        if(i==b)
        {
            r=1;
        }
    }

    if(r==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
