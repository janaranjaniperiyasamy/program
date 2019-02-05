#include<stdio.h>
void main()
{
    int a,b,s,r=0,p=1;
    scanf("%d",&a);
    b=a;
    while(b)
    {
        b=b/10;
        r++;
    }
    while(r)
    {
        p=p*10;
        r--;
    }
    while(a)
    {
        s=a/p;
        a=a%p;
        if(s%2!=0)
        {
            printf("%d ",s);
        }
        p=p/10;
    }
}
