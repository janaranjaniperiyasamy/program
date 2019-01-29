#include <stdio.h>

int main()
{
    int a[100],n,i,max=0,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
     }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            
        }
    }
    printf("%d %d",min,max);
    return 0;
}
