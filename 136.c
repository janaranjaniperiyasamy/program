#include<stdio.h>
int main()
{
    int n,m[10000],i,a,c=0;
    scanf("%d %d",&n,&a);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
        if(m[i]==a)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("no");
    }
    else
    {
        printf("yes %d",c);
    }
    return 0;
}
