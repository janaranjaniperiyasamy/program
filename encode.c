#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
        if(a[i]+3<=90)
        {
        a[i]=a[i]+3;
        }
        else if(a[i]+3==91)
        {
            a[i]=65;
        }
        else if(a[i]+3==92)
        {
            a[i]=66;
        }
        else if(a[i]+3==93)
        {
            a[i]=67;
        }
        }
        if(a[i]>=97 && a[i]<=122)
        {
        if(a[i]+3<=122)
        {
        a[i]=a[i]+3;
        }
        else if(a[i]+3==123)
        {
            a[i]=97;
        }
        else if(a[i]+3==124)
        {
            a[i]=98;
        }
        else if(a[i]+3==125)
        {
            a[i]=99;
        }
        }
    }
puts(a);
    return 0;
}
