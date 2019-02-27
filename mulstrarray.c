#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000000000],v[1000000],v1[10000000],r[1000000],r1[1000000];
    int i,j,c,l,n,s,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
        strcpy(v,a[i]);
        strcpy(v1,a[k]);
        l=strlen(v);
        s=strlen(v1);
        if(l>s)
        {
            t=a[i];
            a[i]=a[k];
            a[k]=t;
        }
        else if(s==l)
        {
            c=0;
            strcpy(r,a[i]);
            strcpy(r1,a[k]);
            if(r[0]>r1[0])
            {
                c=1;
            }
            if(c==1)
            {
                t=a[i];
            a[i]=a[k];
            a[k]=t;
            }
        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%s",a[i]);
    }

    return 0;
}
