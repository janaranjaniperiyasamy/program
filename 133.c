#include<stdio.h>
int main()
{
    int n,m,i,j,a,b,s=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(b==m)
        {
            s++;
        }
    }
    if(s>0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
