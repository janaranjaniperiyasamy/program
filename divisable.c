#include <stdio.h>

int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
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
