
#include <stdio.h>

int main()
{
    char a[1000];
    int i,j;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            j=i;
            while(a[j+1]==' ')
            {
                if(a[j+1]==' ')
                {
                   a[j]='*';
                    a[j+1]='*';
                     j=j+1;
                }
                else
                {
                    break;
                }
            }
        }
    }
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]!='*')
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}
