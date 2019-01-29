#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='.')
        {
            c++;
        }
    }
    printf("%d",c+1);
    return 0;
}
