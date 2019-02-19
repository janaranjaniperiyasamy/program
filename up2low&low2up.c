#include <stdio.h>

int main()
{
    char a[1000];
    int i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
         else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        else
        {
            
        }
    }
        for(i=0;a[i]!=NULL;i++)
        {
                printf("%c",a[i]);
        }
    return 0;
}
