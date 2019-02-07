
#include <stdio.h>

int main()
{
    int n,a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            
        if(a[i]>a[j])
        {
            printf("%d",i);
            break;
        }
    }}
    return 0;
}
