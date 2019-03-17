#include <stdio.h>

int main()
{
    char a[10000];
    int i,j=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!='a' && a[i]!='b')
        {
            j=1;
        }
    }
    if(j==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
