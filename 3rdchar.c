#include <stdio.h>

int main()
{
    char a[1000];
    int i,j;
    scanf("%s",a);
    for(i=0;a[i]!=0;i++)
    {
        printf("%c",a[i]);
        i=i+2;
    }
return 0;
}
