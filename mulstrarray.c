#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *a[1000000000000],b[1000000],v[1000000],v1[10000000],r[1000000],r1[1000000],t[10000000],o[10000000];
int i,j,c,l,n,s,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=(char*)malloc(n*sizeof(char)); 
scanf("%s",b);
strcpy(a[i],b);
}
for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
        strcpy(v,*a[i]);
        strcpy(v1,*a[k]);
        l=strlen(v);
        s=strlen(v1);
        if(l>s)
        {
        strcpy(t,*a[i]);
        strcpy(*a[i],*a[k]);
        strcpy(*a[k],t);
        }
        else if(s==l)
        {
            c=0;
            strcpy(r,*a[i]);
            strcpy(r1,*a[k]);
            if(r[0]>r1[0])
            {
                c=1;
            }
            if(c==1)
            {
            strcpy(t,*a[i]);
            strcpy(*a[i],*a[k]);
            strcpy(*a[k],t);
            }
        }
    }
    }
    for(i=0;i<n;i++)
    {
       strcpy(o,a[i]);
        printf("%s ",b);
    }
    free(a);

    return 0;
}
