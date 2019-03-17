#include <stdio.h>
#include<string.h>
int main()
{
char a[100][1000],t[1000],r[1000];
int i,l,n,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",a[i]);
}
strcpy(t,a[0]);
for(i=1;i<n;i++)
    {
         strcpy(r,a[i]);
            if(r[0]<t[0])
            {
                strcpy(t,r);
            }
            else if(r[0]==t[0])
            {
                l=strlen(t);
                s=strlen(r);
                if(s<l)
                {
                    strcpy(t,r);
                }
            }
            else
            {
            }
    }
puts(t);
return 0;
}
