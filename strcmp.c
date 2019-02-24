#include <stdio.h>

int main()
{
    char a[1000],b[1000];
    int l=0,l1=0,i,c=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;b[i]!=NULL;i++)
    {
        l1++;
    }
    if(l==l1)
    {
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
    }
    if(c==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
return 0;
}
