#include <stdio.h>

int main()
{
    int n,k;
    float n1;
    scanf("%d %d",&n,&k);
    n1=n>>k;
    printf("%.2f",n1);
    return 0;
}
