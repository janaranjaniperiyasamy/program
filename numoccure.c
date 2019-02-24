
#include <stdio.h>

int main()
{
    char a[1000],n;
    int i,j,c=0;
    scanf("%s %c",a,&n);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==n)
        {
         c++;
        }
    }
        printf("%d",c);
return 0;
}
