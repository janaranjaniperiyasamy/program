
#include <stdio.h>

int main()
{
int a[20],n,i,j,k,z,min=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
k=n+1-k;
for(i=0;i<k;i++)
{
min=0;
for(j=0;j<n;j++)
{
if(a[j]>min)
{
min=a[j];
z=j;
}
}
a[z]='\0';
}
printf("%d",min);

    return 0;
}
