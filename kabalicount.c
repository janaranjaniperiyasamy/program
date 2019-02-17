#include <stdio.h>

int main()
{
    char *str,a[100]={"kabali"};
    int n,i,c,l,r,s,k;
    scanf("%d",&n);
    str = (char *)malloc(sizeof(char)*n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        c=strlen(a);
        l=strlen(str);
        if(c==l)
        {
        for(j=0;j<c;j++)
        {
            for(k=0;k<l;k++)
            {
                if(a[j]==str[k])
                {
                    str[k]='*';
                }
            }
        }
        r=0;
        for(j=0;j<l;j++)
        {
            if(str[j]!='*')
            {
                r++;
            }
        }
        if(r==0)
        {
            s++;
        }
        }
        
    }
    printf("%d",s);
    
    return 0;
}
