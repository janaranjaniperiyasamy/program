#include <stdio.h>

int main()
{
    int b,i=1,j,r=0;
    scanf("%d",&b);
    for(j=0;j<=b/2;j++)
    {
    i=i*2;
    if(i==b)
    {
    r=1;
    }}
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
