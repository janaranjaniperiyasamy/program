#include <stdio.h>

int main()
{
    int a,b,*x,*y;
    scanf("%d %d",&a,&b);
    x=&a;
    y=&b;
    *x=*x ^ *y;
    *y=*x ^ *y;
    *x=*x ^ *y;
    printf("%d %d",a,b);
    return 0;
}
