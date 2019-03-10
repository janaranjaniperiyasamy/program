#include <stdio.h>

int main()
{
    int n,i=0,r,j,a[1000],c=0,p,p1,s=0,b[1000],k;
    scanf("%d %d %d",&n,&p,&p1);
    while(n)
    {
        r=n%10;
        n=n/10;
        a[i]=r;
        i++;
        k=i;
    }
    for(i=i;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(j=0;j<k;j++)
    {
        if(j==p-1)
        {
            while(s<=p1)
            {
        if(s==p1)
        {
            printf("%d",b[j+1+p1]);
            break;
        }
        else
        {
            s++;
        }
            }
        }
    }


    return 0;
}
