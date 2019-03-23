#include <stdio.h>

int main()
{
    char a[100000];
    int i,c=1;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
        }
        else
        {
            printf("%c",a[i]);
            printf("%d",c);
            c=1;
        }
    }

    return 0;
}
