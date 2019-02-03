#include <stdio.h>

int main()
{
    int a[10];
    int i,k=0;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    k=a[0];
    for(i=0;i<10;i++)
    {
     if(a[i]<k)
     {
         k=a[i];
     }
    }
        printf("%d",k);
    return 0;
}
