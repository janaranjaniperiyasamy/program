#include <stdio.h>
int main()
{
    int a,b,c,r;
    scanf("%d %d %d",&a,&b,&c);
    r=a*a+b*b-c*c;
if(r==0)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
