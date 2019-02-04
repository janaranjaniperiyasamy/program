#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    c=c/2;
    for(i=0;a[i]!=NULL;i++)
    {
        if(i==c)
        {
            a[i]='*';
        }
    }
    printf("%s",a);

    return 0;
}
