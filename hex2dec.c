#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int i,sum=0,b=1,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
        if(a[i]>='0' && a[i]<='9' )
        {
            sum=sum+(a[i]-48)*b;
            b=b*16;
        }
        else if(a[i]>='A' && a[i]<='F')
        {
            sum=sum+(a[i]-55)*b;
            b=b*16;
        }
            
    }
    printf("%d",sum);
    return 0;
}
