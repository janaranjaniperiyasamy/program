#include <stdio.h>

int main()
{
    char a[10000];
    int i,t,s=0;
    scanf("%s",a);
    scanf("%d",&t);
    for(i=0;a[i]!=NULL;i++)
    {
        s++;
        if(s==t)
        {
            printf("%c ",a[i]);
            s=0;
        }
    }
    return 0;
}
