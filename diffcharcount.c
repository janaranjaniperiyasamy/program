#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i,n,l,l1,c=0;
    scanf("%s %s %d",a,b,&n);
    l=strlen(a);
    l1=strlen(b);
    if(l==l1)
    {
    for(i=0;i<l;i++)
    {
            if(a[i]!=b[i])
            {
                c++;
            }
    }
}
if(c==n)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
