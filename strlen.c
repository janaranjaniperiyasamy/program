#include <stdio.h>

int main()
{
    char a[1000];
    int l=0,i;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    printf("%d",l);
return 0;
}
