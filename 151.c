#include <stdio.h>

int main()
{
    char a[10000];
    int i,s=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='a' || a[i]=='b')
        {
        
        }
        else
        {
            s++;
        }
    }
    if(s==0 || s==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
