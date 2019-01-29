#include <stdio.h>

int main()
{
    int a,i=1,j,r=0;
    scanf("%d",&a);
    for(j=0;j<=a/2;j++)
    {
    i=i*2;
    if(i==a)
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
