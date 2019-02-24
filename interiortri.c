#include<stdio.h>

int main()
{
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if(a+b+c==180)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }


return 0;
}
