#include <stdio.h>

int main()
{
    char s[100],k[100];
    int i,c=0,c1=0;
    scanf("%s %s",s,k);
    for(i=0;s[i]!=NULL;i++)
    {
       c++; 
    }
   for(i=0;k[i]!=NULL;i++)
    {
       c1++; 
    }
   if(c>c1)
   {
       puts(s);
   }
   else if(c1>c)
   {
      puts(k);
   }
   else
   {
       puts(s);
   }
    return 0;
}
