
#include <stdio.h>

void main()

{
    char a[100];
    int i,j=0,s=0,c=0,r=0,l=0;
    scanf("%[^\n]s",a);
     for(i=0;a[i]!=NULL;i++)
    {
        l++;
    }
    for(i=0;a[i]!=NULL;i++)
    {
        for(j=0;a[j]!=NULL;j++)
        {
            if(a[i]==a[j])
            {
                r++;
            }
        }
        if(s==r)
        {
           c++; 
        }
        else
        {
            s=r;
        }
        r=0;
    }
    if(c==l=1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
