#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i,j,c=0,l,r;
    scanf("%s",a);
    l=strlen(a);
    if(a[0]=='(' && l%2==0)
    {
    for(i=0;i<l;i++)
    {
        if(a[i]=='(')
        {
            r=i;
            while(r<l)
            {
            r++;
            if(a[r]==')')
            {
                a[r]='*';
                c++;
                break;
            }
        }
    }
}
}
if(c==l/2)
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
