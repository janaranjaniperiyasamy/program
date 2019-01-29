#include <stdio.h>

int main()
{
    int a[10],i,max=0;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}
