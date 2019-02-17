#include <stdio.h>

int main()
{
    char a[100];
    int i,j,temp;
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(i%2==0)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
puts(a);
    return 0;
}
