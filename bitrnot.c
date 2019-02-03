#include <stdio.h>

int main()
{
    char a[100];
    int i,k=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
     if(a[i]!='0' && a[i]!='1')
     {
         k=1;
     }
    }
    if(k==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
