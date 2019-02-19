#include <stdio.h>

int main()
{
    char a[1000];
    int i,s=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            s++;
        }
    }
    if(s>1)
    {
        for(i=0;a[i]!=NULL;i++)
        {
            if(a[i]!=' ')
            {
                printf("%c",a[i]);
            }
        }
    }
    else
    {
        for(i=0;a[i]!=NULL;i++)
        {
                printf("%c",a[i]);
        }
    }
    return 0;
}
