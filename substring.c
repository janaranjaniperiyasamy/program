#include<stdio.h>
#include<string.h>

int main()
{
char a[1000],b[1000];
int i,j,m,n,c=0;
scanf("%s %s",a,b);
m=strlen(a);
n=strlen(b);
i=m-n;
j=0;
while(i<m && j<n)
{
        if(a[i]==b[j])
        {
            c++;
        }
        i++;
        j++;
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
