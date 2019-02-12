#include <stdio.h>

int main()
{
    char a[100];
    int i;
    scanf("%[^\n]s",a);
    
    
    for(i=0;a[i]!=NULL;i++)
    {
        if((a[i]>=97 && a[i]<=122) || (a[i]==' '))
        {
            if(i==0)
            {
        a[i]=a[i]-32;
            }
        if(a[i]==' ')
        {
            a[i+1]=a[i+1]-32;
        }
        }
        else
        {
            break;
        }
    }
    puts(a);
    return 0;
}
