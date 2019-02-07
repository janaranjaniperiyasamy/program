#include<stdio.h>
void main()
{
    int l,h,b,s,v;
    scanf("%d %d %d",&l,&h,&b);
    v=l*h*b;
    s=2*l*h+2*l*b+2*h*b;
    printf("%d %d",s,v);
}
