#include <stdio.h>

int main()
{
    int h,m,h1,m1,h2,m2;
    scanf("%d %d",&h,&m);
    scanf("%d %d",&h1,&m1);
    if(h>h1)
    {
    h2=h-h1;
    }
    else
    {
        h2=h1-h;
    }
    if(m>m1)
    {
    m2=m-m1;
    }
    else
    {
        m2=m1-m;
    }
    printf("%d %d",h2,m2);

    return 0;
}
