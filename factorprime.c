#include <stdio.h>

int main()
{
int a,c,i,j,k=0,a1[100];
scanf("%d",&a);
for(i=2;i<=a;i++)
{
    c=0;
    if(a%i==0)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            a1[k]=i;
            k++;
        }
    }
}
//a1[i]=NULL;
for(i=0;i<k;i++)
{
    printf("%d ",a1[i]);
}
    return 0;
}
