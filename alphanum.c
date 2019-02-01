#include <stdio.h>

int main()
{
    char a[100];
    int i,r=0,r1=0;
     scanf("%[^\n]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        if((a[i]>=65 && a[i]<=90) ||(a[i]>=97 && a[i]<=122))
        {
            r++;
        }
        if(a[i]>='0' && a[i]<='9')
        {
            r1++;
        }
    }
if(r>0 && r1>0)
{
    printf("Yes");
}
else
{
    printf("No");
}
    return 0;
}
