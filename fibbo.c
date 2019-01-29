#include <stdio.h>

int main()
{
    int n,f1=1,f2=1,f3,i;
    scanf("%d",&n);
    printf("%d %d ",f1,f2);
    for(i=0;i<n-2;i++)
    {
        f3=f1+f2;
         printf("%d ",f3);    
        f1=f2;
        f2=f3;
    }
   
    return 0;
}
