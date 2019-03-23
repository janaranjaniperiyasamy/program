#include <stdio.h>

int main()
{
    long int a,b,c,i=0,r,a1[100000],j,s=0;
    scanf("%ld %ld",&a,&b);
    c=a*b;
    while(c)
    {
        r=c%2;
        c=c/2;
        a1[i]=r;
        i++;
    }
    for(j=0;j<i;j++)
    {
        s++;
        if(a1[j]==1)
        {
            printf("%ld",s);
            break;
        }
    }
    return 0;
}
