#include<stdio.h>
void main()
{
    long int a[100000],n,i,sum=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
    scanf("%ld",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
    sum=sum+i;
    }
    printf("%ld",sum);
}
