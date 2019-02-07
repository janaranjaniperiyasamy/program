#include<stdio.h>
void main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
        }
    }
}
