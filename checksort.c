#include<stdio.h>
int main()
{
int a[1000],n,i,j,c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]<a[i+1] || a[i]==a[i+1])
    {
        c++;
    }
}
if(c+1==n)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
