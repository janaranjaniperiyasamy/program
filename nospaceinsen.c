#include <stdio.h>

int main()
{
    char a[1000];
    int i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
            if(a[i]!=' ')
            {
                printf("%c",a[i]);
            }
        }
    
    return 0;
}
