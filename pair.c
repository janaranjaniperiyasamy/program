
#include <stdio.h>

int main()
{
    int n,a[1000],i,j,c=0,s=0,n1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n;
    while(n1)
    {
        for(j=s+1;j<n;j++)
        {
            if(a[s]<a[j])
            {
                c++;
            }
        }
    n1--;
    s++;
    }
printf("%d",c);
    return 0;
}
