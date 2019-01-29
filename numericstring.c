#include <stdio.h>

int main()
{
    char a[100];
    int i,r=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if((a[i]>='0') && (a[i]<='9'))
        {
            r=1;
        }
    }
    if(r==1)
    {
        printf("yes");
        }
        else
        {
            printf("No");
        }
    return 0;
}
