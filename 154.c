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
            a[i]=a[i]-32;
            s=0;
        }
    }
    printf("%s",a);
    return 0;
}
