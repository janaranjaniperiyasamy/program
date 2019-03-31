#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s %s",a,b);
if(strlen(a)==strlen(b+1))
{
    printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
