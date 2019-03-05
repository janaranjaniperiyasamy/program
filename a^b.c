#include <stdio.h>

int main()
{
    int a,b,p=1;
    scanf("%d %d",&a,&b);
    while(b)
    {
        p=p*a;
        b--;
    }
    printf("%d",p);

    return 0;
}
