#include <stdio.h>

int main()
{
    char a[100];
    int i,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(((a[i]>='0') && (a[i]<='9')) || ((a[i]>=65) &&(a[i]<=90)) || ((a[i]>=97) && (a[i]<=122)) || (a[i]==' '))
        {
            
        }
        else
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
