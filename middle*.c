#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0,d,d1;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    c++;
    d=c%2;
    d1=c/2;
    if(d==1)
    {
        for(i=0;i<c;i++)
        {
            if(i==d1)
            {
                a[i]='*';
            }
        }
    }
    else
    {
        for(i=0;i<c;i++)
        {
         if(i==d1-1 || i==d1)
         {
             a[i]='*';
         }
        }
    }
    puts(a);
    return 0;
}
