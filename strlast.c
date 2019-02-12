
#include <stdio.h>

int main()
{
    char a[100],b[100];
    int n,i,c=0,r=0,j=0;
    scanf("%s %d",a,&n);
    for(i=0;a[i]!=0;i++)
    c++;
    for(i=c-1;i>=0;i--)
    {
        r++;
        if(r<=n)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            break;
        }
    }
for(i=n-1;i>=0;i--)
{
    printf("%c",b[i]);
}
    return 0;
}
