#include <stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100]={"kabali"};
    int i,j,n,c=0,c1,k,r,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        c1=strlen(b);
        l=strlen(a);
        if(c1==l)
        {
        for(j=0;j<c1;j++)
        {
            for(k=0;k<l;k++)
            {
                if(b[j]==a[k])
                {
                    a[k]='*';
                    break;
                }
            }
        }
        r=0;
        for(j=0;j<l;j++)
        {
            if(a[j]!='*')
            {
                r++;
            }
        }
        if(r==0)
        {
            c++;
        }
        }
        
    }
    printf("%d",c);
    

    return 0;
}
