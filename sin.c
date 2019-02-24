#include<stdio.h>
#include<math.h>

int main()
{
    double n,val,c;
    scanf("%lf",&n);
    val = n*(3.142/ 180);
    c=sin(val);
    printf("%.1lf",c);

return 0;
}
