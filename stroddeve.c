#include <stdio.h>

void main()

{
    char a[100],b[100],c[100];
    int i,j=0,k=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(i%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    b[j]=NULL;
    c[k]=NULL;
    
printf("%s ",b);
printf("%s ",c);

}
