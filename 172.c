#include <stdio.h>

int main()
{
    int n,r,i=0,a[100000],j;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
    }
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=i+1;a[j]!=NULL;j++)
        {
            if(a[i]<a[j])
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
        }
    }
    for(i=0;a[i]!=NULL;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
