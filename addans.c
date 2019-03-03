#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[]={" Answer"};
    int i,l,j;
    scanf("%s",a);
    l=strlen(a);
    j=l;
    for(i=0;i<strlen(b);i++)
    {
        a[j]=a[j]+b[i];
        j++;
    }
    printf("%s",a);
    return 0;
}
