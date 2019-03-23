#include <stdio.h>

int main()
{
    long int a,b,c,i=0,r,a1[100000],j,s=0,c1=0;
    scanf("%ld %ld",&a,&b);
    c=a*b;
    while(c)
    {
        r=c%2;
        c=c/2;
        a1[i]=r;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        s++;
        if(a1[j]==1)
        {
            c1++;
        }
        if(c1==2)
        {
            printf("%ld",s);
            break;
        }
    }
    return 0;
}
