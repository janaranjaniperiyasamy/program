#include <stdio.h>

int main()
{
    int a,b,a1,b1,a2,b2;
    scanf("%d %d",&a,&b);
     scanf("%d %d",&a1,&b1);
      scanf("%d %d",&a1,&b1);
    if((a==a1 && a1==a2) || (b==b1 && b1==b2))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
