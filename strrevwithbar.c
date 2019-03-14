#include<stdio.h>
#include<string.h>
void main()
{
char a[10000];
int i,s;
scanf("%s",a);
s=strlen(a);
for(i=s-1;i>=0;i--)
{
    printf("%c-",a[i]);
}
}
