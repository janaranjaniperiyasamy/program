#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,r=0,c=0,j;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    j=0;
        for(i=c-1;i>=0;i--)
        {
        b[j]=a[i];
        j++;
        }
    for(i=0;i<c;i++)
    {
            if(a[i]==b[i])
            {
                r++;
            }
    }
    if(r==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
