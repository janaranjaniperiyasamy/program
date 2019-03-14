#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[10000];
    int i,j,l,l1;
    scanf("%s %s",a,b);
    l=strlen(a);
    l1=strlen(b);
    if(l>l1)
    {
        for(i=0;i<l1;i++)
        {
            printf("%c",a[i]);
        }
        for(i=0;i<l1;i++)
        {
            printf("%c",b[i]);
        }
    }
    else if(l<l1)
    {
        for(i=0;i<l;i++)
        {
            printf("%c",a[i]);
        }
        for(i=0;i<l;i++)
        {
            printf("%c",b[i]);
        }
    }
    else
    {
         for(i=0;i<l;i++)
        {
            printf("%c",a[i]);
        }
        for(i=0;i<l;i++)
        {
            printf("%c",b[i]);
        }
    }
    return 0;
}
