#include <stdio.h>

int main()
{
    int a,i,j,b[1000],k=0,min;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(j%2!=0)
            {
            if(i*j==a)
            {
             b[k]=i;
             k++;
            }
            }
        }
    }
    min=b[0];
for(i=0;b[i]!=NULL;i++)
{
    if(min>b[i])
    {
        min=b[i];
    }
}
printf("%d",min);
    return 0;
}
