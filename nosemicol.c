#include <stdio.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    if(puts(s))
    return 0;
}
