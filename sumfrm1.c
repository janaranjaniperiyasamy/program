#include <stdio.h>

int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    printf("%d",s);
    return 0;
}
