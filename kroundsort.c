#include<stdio.h>
#include<string.h>

int main()
{
char a[1000];
int i=0,j,n,l,temp;
scanf("%s %d",a,&n);
l=strlen(a);
while(n)
{
temp=a[l-1];
    for(i=l-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    n--;
}
puts(a);
return 0;
}
