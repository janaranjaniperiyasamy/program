#include <stdio.h>
#include<string.h>

int main()
{
    char a[1000],b[1000];
    int i,j,c=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;b[j]!=NULL;j++)
        {
            if(a[i]==b[j])
            {
                c=1;
            }
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
