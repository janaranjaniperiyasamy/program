#include <stdio.h>

int main()
{
    char a[1000];
    int j,i,c=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]=='V' && a[i+1]=='i' && a[i+2]=='s' && a[i+3]=='h' && a[i+4]=='a' && a[i+5]=='l')
        {
            c++;
        }
         if(a[i]=='S' && a[i+1]=='u' && a[i+2]=='n' && a[i+3]=='d' && a[i+4]=='a' && a[i+5]=='r')
        {
            c++;
        }
        
    }
    if(c==2)
    {
printf("yes");
}
else
{
    printf("no");
}
    return 0;
}
