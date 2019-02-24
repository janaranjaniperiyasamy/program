#include <stdio.h>

int main()
{
    char a[1000];
    int i,j,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        c=0;
    for(j=i+1;a[j]!=NULL;j++)
    {
        if(a[i]==a[j] || a[i]==a[j]+32 || a[i]==a[j]-32)
        {
         c++;
         a[j]='*';
        }
    }
    if(c==0)
    {
        if(a[i]!=' ' && a[i]!='*')
        {
        printf("%c ",a[i]);
        }
    }
    }
return 0;
}
