#include <stdio.h>

int main()
{
int a[10000],i,c=0,n,s=1;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
while(1)
{
for(i=0;i<n;i++)
{
    if(s%a[i]==0)
    {
        c++;
    }
}
if(c==n)
{
    printf("%d",s);
    break;
}
else
{
    s++;
    c=0;
}
}
    return 0;
}
