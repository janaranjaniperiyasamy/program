#include <stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000];
    int i,c=0,s=0,k,l,j;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    l=strlen(b);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            k=i+1;
            s=0;
            for(j=0;j<l;j++)
            {
                if(a[k]==b[j])
                {
                   s++; 
                }
                k++;
            }
            if(s==l)
            {
            c++;
            }
        }
    }
    s=0;
    for(i=0;i<=l;i++)
    {
        if(a[i]==b[i])
        {
            s++;
        }
    }
    if(s==l && a[l]==' ')
    {
        c++;
    }
    printf("%d",c);
return 0;
}
