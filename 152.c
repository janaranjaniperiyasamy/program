#include <stdio.h>

void main()
{
    char a[100],b[100];
    int c=0,i,l=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
        {
            break;
        }
            
       if((a[i]=='a'||a[i]=='e'||a[i]=='u'||a[i]=='i'||a[i]=='o')&&(a[i+1]!='a'||a[i+1]!='e'||a[i+1]!='i'||a[i+1]!='e'||a[i+1]!='u'))
            {
                b[c]=a[i];
                c++;
                b[c]=a[i+1];
                c++;
                i++;
                
            }
       
        if((a[i]!='a'||a[i]!='e'||a[i]!='u'||a[i]!='i'||a[i]!='o')&&(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'))
            {
                b[c]=a[i];
                c++;
                b[c]=a[i+1];
                c++;
                i++;
                
            }
            
        
    }
        
    printf("%d",c);


}
