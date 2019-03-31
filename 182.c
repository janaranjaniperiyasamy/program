
#include <stdio.h>

int main()
{
    int a[1000],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            
        }
        else if(a[i]==a[i+1])
        {
            c++;
        }
        else
        {
            c++;
        }
    }
printf("%d",c);
    return 0;
}
