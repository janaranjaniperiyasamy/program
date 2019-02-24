#include <stdio.h>

int main()
{
    char a[1000],b;
    int i;
    scanf("%s %c",a,&b);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==b)
        {
            printf("%d",i+1);
            break;
        }
    }
return 0;
}
