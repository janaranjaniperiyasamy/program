#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,c=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;b[i]!=NULL;i++)
    {
    a[c]=b[i];
    c++;
    }
    puts(a);
    return 0;
}
