#include <stdio.h>

int main()
{
    char a[100],b[100]={"Saturday"},c[100]={"Sunday"};
    int i,c1=0;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==b[i] || a[i]==c[i])
        {
            c1++;
        }
    }
        if(c1==8 || c1==6)
        {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
