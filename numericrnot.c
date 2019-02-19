#include <stdio.h>

int main()
{
    char a[1000];
    int i,s=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>'9' || a[i]<'0')
        {
            s=1;
        }
    }
    if(s==1)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
