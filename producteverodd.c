#include <stdio.h>

int main()
{
    int a,i,j;
    scanf("%d %d",&i,&j);
    a=i*j;
    if(a%2==0)
    {
        printf("even");
    }
    else
    {
    printf("odd");
    }
    return 0;
}
