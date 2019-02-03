#include <stdio.h>

int main()
{
    char a[100];
    int i,r=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            r=1;
        }
    }
    if(r==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
