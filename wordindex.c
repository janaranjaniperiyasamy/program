
#include <stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[1000];
    int i,j,c,c1=0,c2=0,k;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    c=strlen(b);
    for(i=0;a[i]!=NULL;i++)
    {
        k=i;
        c2=0;
        while(a[k]!=' ')
        {
        for(j=0;b[j]!=NULL;j++)
        {
            if(a[k]==b[j])
            {
                c2++;
                k++;
                
            }
        }
        }
        if(c2==c)
        {
            break;
        }
            else
            {
                if(a[k]==' ')
                {
                    c1++;
                }
            }
        
    }
    printf("%d",c1+1);
    return 0;
}
