#include <stdio.h>

int main()
{
    int a,b,s;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='/')
    {
        s=a/b;
    }
    if(c=='%')
    {
        s=a%b;
    }
    printf("%d",s);
    return 0;
}
