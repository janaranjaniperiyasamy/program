#include <stdio.h>

int main()
{
    int a,h,m;
    scanf("%d",&a);
    h=a/60;
    m=a%60;
    printf("%d %d",h,m);

    return 0;
}
