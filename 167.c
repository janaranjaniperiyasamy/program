#include <stdio.h>

int main()
{
    char a[100000];
    int i,j,l=0,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!=' ')
        {
            l++;
        }
    }
    for(i=2;i<l;i++)
    {
        if(l%i==0)
        {
            c=1;
        }
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
