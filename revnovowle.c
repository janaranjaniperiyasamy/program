#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    c++;
    for(i=0;i<c;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' ||a[i]=='u' ||a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' ||a[i]=='U')
        {
            a[i]=NULL;
        }
    }
    for(i=c;i>=0;i--)
    {
        if(a[i]!=NULL)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
