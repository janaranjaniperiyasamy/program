
#include<stdio.h>
#include<string.h>
void main()
{
    char a1[1000],b1[1000],c1[1000];
    int i,j,k=0,n=0,l=0,m,s=0;
    gets(a1);
    scanf("%s",b1);
    m=strlen(b1);
    for(i=0;a1[i]!='\0';i++)
    {
        if(a1[i]!=' ')
        {
           c1[k]=a1[i]; 
           k++;
        }
        if(a1[i]==' ')
        {
            s++;
            for(j=0;j<k;j++)
            {
                if(c1[j]==b1[l])
                
                    n++;
              
                l++;
            }
            for(j=0;j<k;j++)
            {
                c1[j]='\0';
                n=0;
                l=0;
            }
        }
    }
    n=0;
    l=0;
        for(j=0;j<k;j++)
            {
                if(c1[j]==b1[l])
                {
                    n++;
                    l++;
                }
            }
            if(m==n)
                s++;
               printf("%d",s);
   
}
