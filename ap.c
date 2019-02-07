#include <stdio.h>

int main()
{
    int a,d,n,i,s=0;
    scanf("%d %d %d",&a,&d,&n);
    for(i=0;i<n;i++)
    {
        s=s+a;
        a=a+d;
        
    }
    printf("%d",s);

    return 0;
}
