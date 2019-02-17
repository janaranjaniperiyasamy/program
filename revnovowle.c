#include <stdio.h>

int main()
{
    char a[100];
    int i,c;
    scanf("%d",&c);
    for(i=0;i<c+1;i++)
    {
    scanf("%c",&a[i]);
    }
    for(i=0;i<c+1;i++)
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
