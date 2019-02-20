#include <stdio.h>

int main()
{
    int a,b,r=1,c=0,i;
    scanf("%d %d",&a,&b);
    while(r*r<=b+1)
    {
    for(i=a;i<=b;i++)
    {
        if(r*r==i)
        {
            c++;
        }
        
    }
    r++;
    }
    printf("%d",c);

    return 0;
}
