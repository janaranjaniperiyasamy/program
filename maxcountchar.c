#include <stdio.h>

int main()
{
    char a[100];
    int i,j,c=0,max=0,b;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=i+1;a[j]!=NULL;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            
        }
        if(c>max)
        {
            max=c;
            b=a[i];
            c=0;
        }
    }
    printf("%c",b);
    return 0;
}
