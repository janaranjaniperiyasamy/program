#include <stdio.h>
#include<string.h>
int main()
{
char a[100][1000],t[1000],r1[1000],r[1000];
int i,j,c,l,n,s,k;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
        l=strlen(a[i]);
        s=strlen(a[k]);
        if(l>s)
        {
        strcpy(t,a[i]);
        strcpy(a[i],a[k]);
        strcpy(a[k],t);
        }
        else if(s==l)
        {
            c=0;
            strcpy(r,a[i]);
            strcpy(r1,a[k]);
            j=0;
            if(r[j]>r1[j])
            {
                c=1;
            }
            else if(r[j]==r1[j])
            {
                while(j<=strlen(r))
                {
                j++;
                if(r[j]>r1[j])
                {
                    c=1;
                }
                }
            
            }
            if(c==1)
            {
            strcpy(t,a[i]);
            strcpy(a[i],a[k]);
            strcpy(a[k],t);
            }
        }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%s ",a[i]);
    }

    return 0;
}
