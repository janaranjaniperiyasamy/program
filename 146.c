#include <stdio.h>

int main()
{
    int a,b,f1=1,f2=1,c,i;
    scanf("%d %d",&a,&b);
    if(a-b<=5)
    {
        for(i=1;i<=a;i++)
        {
            f1=f1*i;
        }
        for(i=1;i<=b;i++)
        {
            f2=f2*i;
        }
        c=f1/f2;
        printf("%d",c);
    }

    return 0;
}
