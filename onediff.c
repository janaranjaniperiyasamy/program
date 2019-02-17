#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,c=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
